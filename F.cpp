#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define eps 1e-9
#define all(a)   a.begin(),a.end()
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define sz size()
#define rd(inp) scanf("%lld",&inp)
#define rd2(inp1, inp2) scanf("%lld %lld",&inp1, &inp2)
#define rl(inp) scanf("%d",&inp)
#define pf(out) printf("%lld\n", out);

const long long linf = 1e18+5;
const int mod = (int) 1e9 + 7;
const int inf = 1e9;

ll read(){
	bool minus = false;
	ll result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus){
		return -result;
	}
	else{
		return result;
	}
}

ll fpow(ll base,ll power){
	ll result = 1;
	while (power > 0){
		if (power%2 == 1) result=(result*base);
  		base = (base*base);
  		power /= 2;
  	}
	return result;
}

void solve(){

	ll n, m, d, D;
	cin >> n >> m >> d >> D;

	bool f = 0;
	ll i, j;

	if ( m >= d * n && m <= D * n ){
		f = 1;
	} 

	if ( !f ){
		printf("-1\n");
		return;
	}

	ll x = m / n, here = 0, tot = 0;

	for ( i = 1 ; i <= n ; i ++ ){
		here = 0;
		for ( j = i + 1 ; j <= n ; j ++ ){
			here ++;
			tot ++;
			cout << i << " " << j << "\n";
			if ( here == x ){
				goto there;
			}
		}
		for ( j = 1 ; j < i ; j ++ ){
			here ++;
			tot ++;
			cout << i << " " << j << "\n";
			if ( here == x ){
				goto there;
			}
		}
		there:;
	}

	tot = m - tot;
	ll pt = 1;

	while(tot -- ){
		cout << pt << " " << pt << "\n";
		pt ++;
	}

	return;
}

int main(){

 	int t;
 	cin >> t;
 	while ( t -- ){
 		solve();
 	} 

	return 0;
}

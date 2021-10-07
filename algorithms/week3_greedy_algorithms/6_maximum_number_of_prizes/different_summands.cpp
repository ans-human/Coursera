#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long
#define pb push_back
#define F first
#define S second
#define ld long double
#define rep(i,n) for (int i =0;i < (n); ++i)
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
const int inf = 1e9 + 10;

void solve() {
	ll n; cin >> n;
	vi a;
	ll tmp = n;
	ll i;
	for ( i = 1; i * (i + 1) <= 2 * tmp; i++) {
		a.pb(i);
		n -= i;
	}
	i -= 2;
	//cout << n << " " << i << endl;;
	if (n != 0) a[i] += n;
	cout << a.size() << endl;
	for ( auto c : a) cout << c << " ";

}

int main() {

	FASTIO;


	int t = 1;

	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
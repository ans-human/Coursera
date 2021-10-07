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
#define M_PI 	3.14159265358979323846
const int inf = 1e9 + 10;

void solve() {
	ll n; cin >> n;
	unordered_map<ll, ll> m;
	for (ll i = 0; i < n; i++) {
		ll a; cin >> a;
		m[a]++;
	}
	ll ans = 0;
	for (auto c : m) {
		ans = max(ans, c.S);
	}

	if (ans > n / 2) cout << 1;
	else cout << 0;
}
int main() {

	FASTIO;

	int t = 1;

	//cin >> t;
	ll k = 1;
	while (t--) {
		//cout << "Case #" << k++ << ": ";
		solve();
	}
	return 0;
}

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
	ll n;
	cin >> n;
	ll a[n], b[n];

	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i=0; i<n; i++) cin>>b[i];

	sort(a, a + n);
	sort(b, b + n);

	ll ans = 0;

	for (ll i = 0; i < n; i++) {
		ans += a[i] * b[i];
		//cout<<a[i]*b[i]<<" ";
	}

	cout << ans << endl;
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

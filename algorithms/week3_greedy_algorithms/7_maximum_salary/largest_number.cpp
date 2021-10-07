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
struct cmp {
	bool operator()( const string &s, const string &t) {
		string a, b;
		a = s; b = t;
		return a + b > b + a;
	}
};

void solve() {
	ll n; cin >> n;
	vector<string> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(all(v), cmp());

	for (auto c : v) cout << c;
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

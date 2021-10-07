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
	ll d, m, n;
	cin >> d >> m >> n;
	ll stops[n + 2];
	stops[0] = 0;
	for (ll i = 1; i <= n ; i++) cin >> stops[i];
	stops[n + 1] = d;

	//for (auto c : stops) cout << c << " ";
	//cout << endl;
	ll tank = m, ans = 0;
	for (int i = 1; i <= n; i++) {

		m -= stops[i] - stops[i - 1];
		//cout << i << " " << m << " " << stops[i + 1] - stops[i] << " ";
		if (m < 0) {
			cout << -1;
			return;
		}
		if (m < stops[i + 1] - stops[i]) {
            if(tank < stops[i+1] - stops[i]){
                cout<<-1;
                return;
            }
			ans++;
			m = tank;
		}
		//cout << m << endl;
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

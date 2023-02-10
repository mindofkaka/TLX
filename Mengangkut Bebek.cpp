#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll p[1005], c[1005], b[100005];
int main() {
	ll k; cin >> k;
	for(int i = 0; i < k; i++) cin >> p[i];
	for(int i = 0; i < k; i++) cin >> c[i];
	ll n; cin >> n;
	for(int i = 0; i < n; i++) cin >> b[i];
	vector<pair<ll, ll>> v;
	for(int i = 0; i < k; i++) v.push_back({c[i], p[i]});
	sort(v.begin(), v.end());
	sort(b, b+n, greater<int>());
	ll idx = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(v[idx].second <= 0) idx++;
		v[idx].second--;
		ans+=v[idx].first*b[i];
	}
	cout << ans;
}

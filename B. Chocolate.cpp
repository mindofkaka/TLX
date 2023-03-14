#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll n;  cin >> n;
	ll a[n+1], last = 0, cnt = 0;
	vector<ll> v;
	bool first = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 1){
			if(first == 1){
				v.push_back(i-last);
			}
			last = i;
			first = 1;
			cnt++;
		}
	}
	if(cnt == 0){
		cout << 0;
		return 0;
	}
	ll ans = 1;
	for(int i = 0; i < v.size(); i++) ans*=v[i];
	cout << ans;
}

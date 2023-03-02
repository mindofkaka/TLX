#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair <ll, ll> pr[100010];
int main() {
	ll n, ans = 0; 
	cin >> n;
	for(ll i = 0; i < n; i++){
		ll d;
		cin >> pr[i].second >> d;
		pr[i].first = pr[i].second+d;
	}
	sort(pr, pr+n);
	ll cur = 0;
	for(ll i = 0; i < n; i++){
		if(pr[i].second >= cur){
			ans++;
			cur = pr[i].first;
		}
	}
	cout << ans;
}
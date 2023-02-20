#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a, ll b){
	ll x = 1;
	for(ll i = 0; i < b; i++){
		x*=a;
	}
	return x;
}

int main() {
	ll n, k, ans = 0;
	cin >> n >> k;
	ans = power(2, n-k)*k;
	if(n < k) ans = n;
	cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n; cin >> n;
	ll i = 1;
	while(i <= n){
		i*=2;
	}
	cout << i-n;
}
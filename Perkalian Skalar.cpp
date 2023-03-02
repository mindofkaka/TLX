#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	ll a[n+1], b[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+n, greater<int>());
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i]*b[i];
	}
	cout << sum;
}
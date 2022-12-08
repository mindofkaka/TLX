#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		reverse(a, a+n);
		for(int i = 0; i < 5; i++) ans += a[i];
		cout << ans << "\n";
	}
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>> t;
	while(t--){
		int n; cin >> n;
		int ans1 = 0, ans2 = 0;
		for(int i = 0; i < n; i++){
			int a, b, c;
			cin >> a >> b >> c;
			int mi = min(min(a, b), c);
			int mx = max(max(a, b), c);
			ans1 += mi;
			ans2 += mx;
		}
		cout << ans1 << " " << ans2 << "\n";
	}
}
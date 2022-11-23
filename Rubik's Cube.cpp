#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a = n*n*n;
	int b = pow(n-2, 3);
	cout << a-b << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
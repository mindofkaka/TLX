#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	int a[n+5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	cin >> k;
	int dp[k+5];
	for(int i = 1; i <= k; i++) dp[i] = 1e5;
	dp[0] = 0;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){
			if(i >= a[j] && dp[i-a[j]] != 1e5){
				dp[i] = min(dp[i-a[j]]+1, dp[i]);
			}
		}
	}
	if(dp[k] == 1e5) cout << -1;
	else cout << dp[k];
}
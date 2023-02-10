#include <bits/stdc++.h>
using namespace std;

int main() {
	vector< pair<int,int> > arr;
	int k; cin >> k;
	for(int i = 0; i < k; i++) cin >> arr[i].second;
	for(int i = 0; i < k; i++) cin >> arr[i].first;
	int n; cin >> n;
	int b[n+1];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(b, b+n);
	sort(arr.begin(), arr.end());
	int ind = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(arr[ind].second <= 0) ind++;
		arr[ind].second--;
		ans += v[ind].first*b[i];
	}
	cout << ans;
}

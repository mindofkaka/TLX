#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int main() {
	memset(arr, 0, sizeof(arr));
	int n, m, cnt = 0;
	cin >> n >> m;
	int a[m+5];
	for(int i = 1; i <= m; i++){
		cin >> a[i];
		arr[a[i]]++;
	}
	for(int i = 1; i <= n; i++){
		if(arr[i]%4 == 2 || arr[i]%4 == 3) cnt++;
	}
	cout << cnt;
}
#include <bits/stdc++.h>
using namespace std;

int n, q, arr[100005];
int search(int x){
	int l = 0, r = n;
	while(l < r){
		int mid = (r+l)/2;
		if(arr[mid+1] <= x) l = mid+1;
		else r = mid;
	}
	return l;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> arr[i];
	cin >> q;
	int x, y;
	for(int i = 0; i < q; i++){
		cin >> x >> y;
		cout << search(y)-search(x) << "\n";
	}
}
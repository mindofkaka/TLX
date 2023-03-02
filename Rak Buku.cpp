#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b;
	cin >> n >> b;
	int h[n+1], cnt = 0;
	for(int i = 0; i < n; i++) cin >> h[i];
	sort(h, h+n, greater<int>());
	int ind = 0;
	while(cnt < b){
		cnt+=h[ind];
		ind++;
	}
	cout << ind;
}
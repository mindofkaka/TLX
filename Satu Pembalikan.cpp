#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+5], b[n+5], cnt = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		cin >> b[i];
		if(b[i] == a[i]) cnt++;
	}
	cout << cnt;
}
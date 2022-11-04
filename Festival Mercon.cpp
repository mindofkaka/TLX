#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], b[n], sum(0);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < n; i++){
		int x = a[i];
		int y = b[i];
		int pow = 1;
		for(int j = 0; j < y; j++){
			pow *= x;
			pow %= 10;
		}
		sum += pow;
	}
	if(sum%2==0) cout << 0;
	else cout << 1;
}
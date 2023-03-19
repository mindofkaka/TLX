#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int x, y, ev = 0, od = 0;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		if((x+y)%2 == 0) ev = 1;
		else od = 1;
	}
	if(ev == 1 && od == 1) cout << "YES";
	else cout << "NO";
}
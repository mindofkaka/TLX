#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	bool eq = true, ni = true, nd = true, non = true;
	for(int i = 1; i < n; i++){
		if(a[i] != a[i-1]) eq = false;
		if(a[i] > a[i-1]) ni = false;
		if(a[i] < a[i-1]) nd = false;
	}
	if(eq) cout << "EQUAL";
	else if(ni) cout << "NONINCREASING";
	else if(nd) cout << "NONDECREASING";
	else cout << "NONE";
}
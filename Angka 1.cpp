#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t = 1;;
	cin >> n;
	cout << "1\n";
	for(int i = 2; i <= n; i++){
		cout << t+i << "\n";
		t+=i;
	}
}
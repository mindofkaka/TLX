#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;
	int a = n/y;
	int ans1 = a*x+(n%y);
	int ans2 = n;
	cout << max(ans1, ans2);
}
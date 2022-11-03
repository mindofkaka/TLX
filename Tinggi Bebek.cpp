#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mi = min(a, min(b, c));
	int mx = max(a, max(b, c));
	cout << mi << "\n";
	cout << mx << "\n";
	if((mi == a && mx == b) || (mi == b && mx == a)) cout << c;
	else if((mi == a && mx == c) || (mi == c && mx == a)) cout << b;
	else if((mi == b && mx == c) || (mi == c && mx == b)) cout << a;
}
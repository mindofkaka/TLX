#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	while(a.find(b) < a.length()){
		a.erase(a.find(b), b.length());
		break;
	}
	a.insert(a.find(c)+c.length(), d);
	cout << a;
}
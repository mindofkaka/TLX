#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll x, y, z;
	cin >> x >> y >> z;
	ll disc = x-x*y/100;
	ll tax = disc+z*disc/100;
	cout << tax;
}
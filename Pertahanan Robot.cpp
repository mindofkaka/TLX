#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int x(0), y(0);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'R') x++;
		else if(s[i] == 'L') x--;
		else if(s[i] == 'U') y++;
		else if(s[i] == 'D') y--;
	}
	cout << x << " " << y;
}
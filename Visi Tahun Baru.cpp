#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	for(int i = 0; i < s.length(); i++){
		char a = tolower(s[i]);
		char b = tolower(t[i]);
		if(a != b){
			cout << "x_x";
			return 0;
		}
	}
	cout << "20/20";
}
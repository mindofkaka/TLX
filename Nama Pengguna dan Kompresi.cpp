#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	string x;
	for(int i = 0; i < n; i++){
		if(s[i] != s[i+1]){
			x += s[i];
		}
	}
	cout << x;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int o = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'O' || s[i] == 'o') o++;
		if(o > 1){
			cout << "Tidak";
			return 0;
		}
	}
	if(o == 1) cout << "Ya";
	else cout << "Tidak";
}
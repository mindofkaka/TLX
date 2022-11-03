#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] <= 'Z'){
			s[i] += 32;
			s.insert(i, "_");
		}else if(s[i] == '_'){
			s.erase(s.begin()+i);
			s[i] -= 32;
		}
	}
	cout << s;
}
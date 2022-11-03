#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s;
	int n, a, b;
	cin >> s >> n;
	for(int i = 0; i < s.length(); i++){
		a = s[i]-'a';
		b = (a+n)%26;
		s[i] = b+'a';
	}
	cout << s << "\n";
}
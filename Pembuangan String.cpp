#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s, t;
	cin >> s >> t;
	while(s.find(t) < s.length()){
		s.erase(s.find(t), t.length());
	}
	cout << s;
}
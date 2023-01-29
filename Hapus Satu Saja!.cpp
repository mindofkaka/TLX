#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.length(); i++){
		string c = a;
		c.erase(i, 1);
		if(c == b){
			cout << "Tentu saja bisa!";
			return 0;
		}
	}
	cout << "Wah, tidak bisa :(";
}
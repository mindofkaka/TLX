#include <bits/stdc++.h>
using namespace std;

string palindrom(string S){
	if(S.size() == 0 || S.size() == 1) return "YA";
	else if(S[0] == S[S.size()-1]) return palindrom(S.substr(1, S.size()-2));
	else return "BUKAN";
}

int main() {
	string S;
	cin >> S;
	cout << palindrom(S);
}
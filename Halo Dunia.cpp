#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	getline(cin, s);
	char a[15] = "halo dunia";
	int count = 0;
	for(int i = 0; i < 10; i++){
		if(a[i] == tolower(s[i])){
			count++;
		}
	}
	cout << count;
}
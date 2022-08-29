#include <bits/stdc++.h>
using namespace std;

string cari, kata, b, d;
int n, a, c, e;
int main(){
	cin >> cari >> n;
	a = cari.find('*');
	b = cari.substr(0, a);
	c = b.length();
	d = cari.substr(a+1);
	e = d.length();
	for(int i = 0; i < n; i++){
		cin >> kata;
		if(cari.length()-1 > kata.length()) continue;
		else if(b == kata.substr(0, c) && d == kata.substr(kata.length()-e)){
			cout << kata << "\n";
		}
	}
}

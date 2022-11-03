#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int game = (a+b+c)/7;
	if(a/4 == game || b/4 == game || c/4 == game){
		cout << "YA\n";
	}else{
		cout << "TIDAK\n";
	}
}
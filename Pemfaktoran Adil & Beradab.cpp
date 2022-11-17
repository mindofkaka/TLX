#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, fac(0);
	cin >> t;
	for(int i = 1; i <= t; i++){
		if(t%i == 0) fac++;
		if(fac > 5){
			cout << "NO\n";
			return 0;
		}
	}
	if(fac == 5) cout << "YES\n";
	else cout << "NO\n";
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	int fpb = __gcd(a, b);
	if(fpb == 1){
		cout << "Tidak";
	}else{
		cout << a/fpb << " " << b/fpb;
	}
}
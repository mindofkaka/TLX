#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	double root = sqrt(n);
	if(ceil(root) == floor(root)){
		cout << root;
	}else{
		cout << 0;
	}
}
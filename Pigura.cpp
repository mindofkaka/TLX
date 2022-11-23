#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k, d;
	char c;
	cin >> k >> c >> d;
	int mid = k/2 + 1;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= k; j++){
			if(i == 1 || j == 1 || i == k || j == k){
				cout << d;
			}else if(j == mid && i == mid && k%2 == 1){
				cout << '*';
			}else{
				cout << c;
			}
		}
		cout << "\n";
	}
}
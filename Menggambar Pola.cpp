#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i%2 == 1 && j%2 == 1){
				cout << "*";
			}else if(i%2 == 0 && j%2 == 0){
				cout << "#";
			}else{
				cout << "$";
			}
		}
		cout << "\n";
	}
}
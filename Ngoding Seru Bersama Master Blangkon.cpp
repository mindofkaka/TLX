#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[4], k;
	cin >> a[0] >> a[1] >> a[2] >> k;
	if(k == 0){
		sort(a, a+3, greater<int>());
		for(int i = 0; i < 3; i++){
			cout << a[i] << " ";
		}
	}else{
		sort(a, a+3);
		for(int i = 0; i < 3; i++){
			cout << a[i] << " ";
		}
	}
}
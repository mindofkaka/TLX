#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n], ans = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				ans++;
			}
		}
	}
	cout << ans;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	int a[n], b[k];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < k; i++){
		cin >> b[i];
		int t = a[0], count = 0;
		while(count < n){
			if(t <= b[i]){
				count++;
				t+=a[count];
			}else break;
		}
		cout << count << "\n";
	}
	
}
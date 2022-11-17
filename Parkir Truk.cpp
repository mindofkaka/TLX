#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c, x, y, arr[105], ans(0), mx(-1);
	memset(arr, 0, sizeof(arr));
	cin >> a >> b >> c;
	for(int i = 0; i < 3; i++){
		cin >> x >> y;
		for(int j = x; j < y; j++){
			arr[j]++;
		}
		mx = max(mx, y);
	}
	for(int i = 1; i <= 100; i++){
		if(arr[i] == 1){
			ans += a;
		}else if(arr[i] == 2){
			ans += 2*b;
		}else if(arr[i] == 3){
			ans += 3*c;
		}
	}
	cout << ans;
}
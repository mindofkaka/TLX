#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int berat[n+5], harga[n+5];
	pair<double, int> arr[n+5];
	for(int i = 1; i <= n; i++) cin >> berat[i];
	for(int i = 1; i <= n; i++){
		cin >> harga[i];
		double l = 1.0*harga[i]/berat[i];
		arr[i].first = l;
		arr[i].second = i;
	}
	sort(arr+1, arr+(n+1), greater<pair<double, int>>());
	double y = 1.0*x;
	double total = 0;
	for(int j = 1; j <= n; j++){
		if(y > 0){
			if(y < berat[arr[j].second]){
				total+=1.0*arr[j].first*y;
				y-=1.0*berat[arr[j].second];
			}else{
				total+=1.0*harga[arr[j].second];
				y-=1.0*berat[arr[j].second];
			}
		}
	}
	cout << fixed << setprecision(5) << total;
}
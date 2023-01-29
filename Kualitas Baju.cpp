#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	if(n%2 == 0){
		int mid = n/2;
		double x = a[mid-1];
		double y = a[mid];
		double med = (x+y)/2;
		cout << fixed << setprecision(1);
		cout << med;
	}else{
		int mid = n/2;
		double ans = a[mid];
		cout << fixed << setprecision(1);
		cout << ans;
	}
}
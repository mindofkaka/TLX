#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n, m;
	cin >> n >> m;
	ll l[n+1], r[n+1], ans = 0, cur = 1;
	for(int i = 0; i < n; i++){
		cin >> l[i] >> r[i];
		if(l[i] > cur){
			ans+=l[i]-cur;
			cur = l[i];
		}else if(r[i] < cur){
			ans+=cur-r[i];
			cur = r[i];
		}
	}
	cout << ans;
}
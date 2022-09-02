#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, count = 0;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i] == b[j] || a[i]+1 == b[j]){
				count++;
				b[j] = 0;
				break;
			}
		}
	}
	cout << count;
}
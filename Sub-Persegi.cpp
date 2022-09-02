#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, res = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		res += i*i;
	}
	cout << res;
}
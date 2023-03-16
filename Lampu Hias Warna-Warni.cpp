#include <bits/stdc++.h>
using namespace std;
int a[30];

int main() {
	memset(a, 0, sizeof(a));
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[s[i]-'A'] == 0) cnt++;
		a[s[i]-'A']++;
	}
	sort(a, a+27, greater<int>());
	if(cnt < 3){
		cout << -1;
		return 0;
	}
	if(a[2] == a[1]){
		if(a[0] == a[2]) cout << a[1]*3;
		else cout << a[2]*3+1;
	}else{
		cout << a[2]*3+2;
	}
}
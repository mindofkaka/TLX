#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; 
	cin >> n;
	string a;
	vector	<pair<int, string>> name ;
	for(int i = 0; i < n; i++){
		cin >> a;
		int k = a.length();
		name.push_back(make_pair(k, a));
	}
	sort(name.begin(), name.end());
	for(int i = 0; i < n; i++){
		cout << name[i].second << '\n';
	}
}
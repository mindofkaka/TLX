#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector <string> v;
	while(n--){
		string a; cin >> a;
		int cnt = 0;
		for(int i = 0; i < v.size(); i++){
			if(v[i] < a){
				cnt++;
			}
		}
		cout << cnt+1 << "\n";
		v.push_back(a);
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	vector<int> pos;
	vector<int> neg;
	vector<int> zer;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		if(a < 0) neg.push_back(a);
		else if(a == 0) zer.push_back(a);
		else pos.push_back(a);
	}
	ll ans = 0;
	for(int i = 0; i < pos.size(); i++){
		ans+=pos[i]-1;
	}
	for(int i = 0; i < neg.size(); i++){
		ans+=-1-neg[i];
	}
	if(zer.size() != 0){
		ans+=zer.size();
	}else if(neg.size()%2 == 1) ans+=2;
	cout << ans;
}

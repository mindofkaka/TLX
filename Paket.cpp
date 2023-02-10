#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	multiset<int> st;
	while(n--){
		int x; cin >> x;
		if(st.lower_bound(x) != st.end()){
			st.erase(st.lower_bound(x));
		}
		st.insert(x);
	}
	cout << st.size();
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a, neg = 0, neu = 0, pos = 0;
	vector<int> que;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a < 0){
			que.insert(que.begin()+neg, a);
			neg++;
		}else if(a == 0){
			int y = neg+neu;
			que.insert(que.begin()+y, a);
			neu++;
		}else{
			int z = neg+neu+pos;
			que.insert(que.begin()+z, a);
			pos++;
		}
	}
	for(auto it : que){
		cout << it << "\n";
	}
}
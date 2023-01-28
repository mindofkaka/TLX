#include <bits/stdc++.h>
using namespace std;

pair<string, string> arr[100000];
string nama, x, telp;
int n, q;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		cin >> nama >> telp;
		arr[i] = make_pair(nama, telp);
	}
	for(int i = 0; i < q; i++){
		string name; cin >> name;
		int l = 0, r = n-1, ans = 0, pos = 0;
		while(l <= r){
			int mid = (r+l)/2;
			if(arr[mid].first >= name){
				r = mid-1;
				pos = mid;
			}else{
				l = mid+1;
			}
		}
		if(arr[pos].first == name) cout << arr[pos].second << "\n";
		else cout << "NIHIL\n";
	}
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s = "";
	for(int i = 0; i < n/2; i++){
		if(i%4 == 0){
			cout << 'a'; 
			s+='a';	
		}else if(i%4 == 1){
			cout << 'd'; 
			s+='d';	
		}else if(i%4 == 2){
			cout << 'i'; 
			s+='i';	
		}else{
			cout << 'd';
			s+='d';
		}
	}
	cout << 'w';
	reverse(s.begin(), s.end());
	cout << s;
}
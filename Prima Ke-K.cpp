#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void sieve(int n){
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	for(int i = 2; i*i <= n; i++){
		if(prime[i] == 1){
			for(int p = i*i; p <= n; p += i) prime[p] = 0;
		}
	}
	for(int i = 2; i < n; i++){
		if(prime[i] == true)v.push_back(i);
	}
}

int main() {
	int t; cin >> t;
	sieve(999999);
	while(t--){
		int k; 
		cin >> k;
		cout << v[k-1] << "\n";
	}
}
#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int res = n/2 + n/3 + n/4;
	if(n < res) return solve(n/2) + solve(n/3) + solve(n/4);
	else return n;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	cout << solve(n);
}
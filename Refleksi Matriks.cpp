#include <bits/stdc++.h>
using namespace std;

int n;
int a[80][80];
int b[80][80];
bool identik(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] != b[i][j]) return false;
		}
	}
	return true;
}

bool horisontal(){
	int k = n-1, l = 0;
	for(int i = 0; i < n; i++){
		l = 0;
		for(int j = 0; j < n; j++){
			if(a[i][j] != b[k][l]) return false;
			l++;
		}
		k--;
	}
	return true;
}

bool vertikal(){
	int k = 0, l = n-1;
	for(int i = 0; i < n; i++){
		l = n-1;
		for(int j = 0; j < n; j++){
			if(a[i][j] != b[k][l]) return false;
			l--;	
		}
		k++;
	}
	return true;
}

bool diagkanan(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n;  j++){
			if(a[i][j] != b[j][i]) return false;
		}
	}
	return true;
}

bool diagkiri(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] != b[n-1-j][n-1-i]) return false;
		}
	}
	return true;
}

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cin >> n >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> b[i][j];
		}
	}
	
	if(identik()) cout << "identik\n";
	else if(horisontal()) cout << "horisontal\n";
	else if(vertikal()) cout << "vertikal\n";
	else if(diagkanan()) cout << "diagonal kanan bawah\n";
	else if(diagkiri()) cout << "diagonal kiri bawah\n";
	else cout << "tidak identik\n";
}
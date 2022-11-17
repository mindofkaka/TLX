#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k; cin >> k;
	
	if(k >= 1000){
		cout << "1000 " << k/1000 << "\n";
		k%=1000;
	}
	if(k >= 500){
		cout << "500 " << k/500 << "\n";
		k%=500;
	}
	if(k >= 200){
		cout << "200 " << k/200 << "\n";
		k%=200;
	}
	if(k >= 100){
		cout << "100 " << k/100 << "\n";
		k%=100;
	}
	if(k >= 50){
		cout << "50 " << k/50 << "\n";
		k%=50;
	}
	if(k >= 20){
		cout << "20 " << k/20 << "\n";
		k%=20;
	}
	if(k >= 10){
		cout << "10 " << k/10 << "\n";
		k%=10;
	}
	if(k >= 5){
		cout << "5 " << k/5 << "\n";
		k%=5;
	}
	if(k >= 2){
		cout << "2 " << k/2 << "\n";
		k%=2;
	}
	if(k >= 1){
		cout << "1 " << k/1 << "\n";
	}
}
#include <iostream>
using namespace std;

string biner(int N){
    if (N == 1){
    	return "1";
    }else if(N == 0){
    	return "0";
    }else if(N%2 == 0){
    	return biner(N/2) + "0";
    }else if(N%2 == 1){
    	return biner(N/2) + "1";
    }
}

int main() {
	int n;
	cin >> n;
	cout << biner(n);
}
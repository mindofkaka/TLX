#include <bits/stdc++.h>
using namespace std;

void prima(int n){
    for (int i = 2; i <= n; i++){
        int sum = 0;
        
        if(n%i == 0){
            while (n%i == 0){
                sum++;
                n /= i;
            }
        if(sum == 1){
            cout << i;
        }
        else{
            cout << i << "^" << sum;
        }
        if(i<n){
            cout << " x ";
        }
        
        }
    }
    cout << endl;
}

int main(){
    int n;
    
    cin >> n;
    
    prima(n);
}
















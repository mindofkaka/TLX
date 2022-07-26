#include <bits/stdc++.h>
using namespace std;

int fungsiBaru(int A, int B, int K, int x){
    if(K == 0){
        return x;
    } else {
        return abs(A*fungsiBaru(A, B, K - 1, x) + B);
    }
}

int main(){
    int A, B, K, x;
    
    cin >> A >> B >> K >> x;
    
    cout << fungsiBaru(A, B, K, x) << endl;
    
    return 0;
}
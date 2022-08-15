#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    
    int result = abs(a*x+b);
    for(int i = 1; i < k; i++){
        result = abs(a*result+b);
    }
    cout << result;
}




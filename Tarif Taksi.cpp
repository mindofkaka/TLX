#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int n = c-2000;
        if(n <= 0) cout << a << "\n";
        else{
            int k = n/100;
            int price = a+(b*k);
            cout << price << "\n";
        }
    }
}
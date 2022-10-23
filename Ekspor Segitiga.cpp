#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; 
    cin >> n;
    bool could = false;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a%2 == 0){
            could = true;
            break;
        }
    }
    if(could) cout << "YA\n";
    else cout << "TIDAK\n";
}
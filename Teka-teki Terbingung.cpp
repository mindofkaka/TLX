#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    bool prime = true;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            prime = false;
            cout << i << " " << n/i;
            break;
        }
    }
    if(prime) cout << "1 " << n;
}
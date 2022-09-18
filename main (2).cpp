#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    if(sum >= 200){
        if(a>=50 && b >= 50 && c >= 50) cout << "Lolos";
        else cout << "Tidak Lolos";
    }else{
        cout << "Tidak Lolos";
    }
}
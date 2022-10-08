#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int hasil = a;
    
    while(hasil % b != 0){
        hasil += a;
    }
    
    int c, d, e;
    c = hasil/a;
    d = hasil/b;
    e = c+d;
    cout << e;
}
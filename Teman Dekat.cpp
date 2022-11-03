#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int x[n+1], y[n+1];
    for(int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
    }
    int mi = 2000000, mx = -1;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int nilai = pow(abs(x[i]-x[j]), d) + pow(abs(y[i]-y[j]), d);
            mi = min(mi, nilai);
            mx = max(mx, nilai);
        }
    }
    cout << mi << " " << mx << "\n";
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    int t;
    cin >> t;
    
    char p, q;
    int x, y;
    for(int i = 0; i < t; i++){
        cin >> p >> x >> q >> y;
        if(p == 'A' && q == 'A'){
            swap(a[x-1], a[y-1]);
        }else if(p == 'A' && q == 'B'){
            swap(a[x-1], b[y-1]);
        }else if(p == 'B' && q == 'A'){
            swap(b[x-1], a[y-1]);
        }else if(p == 'B' && q == 'B'){
            swap(b[x-1], b[y-1]);
        }
        
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
}




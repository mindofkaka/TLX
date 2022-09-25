#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b; 
    int x = a.length();
    int y = b.length();
    int count(0), op = x*y;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            count += (a[i]-48)*(b[j]-48);
        }
    }
    cout << count;
}
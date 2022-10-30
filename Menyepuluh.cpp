#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    bool a = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            a = true;
            break;
        }
    }
    if(a == true) cout << "YES\n";
    else cout << "NO\n";
}
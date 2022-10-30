#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int kara = 0;
    bool besar(false), kecil(false), angka(false), kark(false);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            angka = true;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            besar = true;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            kecil = true;
            kara++;
        }else{
            kark = true;
        }
    }
    if(s.length() >= 8 && besar && kecil && angka && kark){
        cout << "Kuat\n";
    }else if(kara >= 12){
        cout << "AgakKuat\n";
    }else{
        cout << "Lemah\n";
    }
}
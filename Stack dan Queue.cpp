#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    deque<int> v;
    while(n--){
        string s;
        int a, count(0);
        cin >> s;
        if(s == "push_front"){ 
            cin >> a;
            v.push_front(a);
        } else if(s == "push_back"){ 
            cin >> a;
            v.push_back(a);
        }
        else if(s == "pop_back") v.pop_back();
        else if(s == "pop_front") v.pop_front();
    }
    for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}
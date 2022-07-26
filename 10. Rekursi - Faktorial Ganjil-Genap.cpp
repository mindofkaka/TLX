#include <bits/stdc++.h>
using namespace std;

int faktorialDouble(int bilBulat){
    if(bilBulat % 2 == 0){
        return bilBulat / 2 * faktorialDouble(bilBulat - 1);
    } else if(bilBulat == 1){
        return 1;
    } else {
        return bilBulat * faktorialDouble(bilBulat - 1);
    }
}

int main(){
    int n;
    
    cin >> n;
    
    cout << faktorialDouble(n) << endl;
    
    return 0;
}
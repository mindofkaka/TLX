#include <iostream>
using namespace std;

int main(){
    int arr[1001];
    int n, m;
    
    cin >> n;
    
    for(int i = 0; i < 1002; i++){
        arr[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        cin >> m;
        arr[m]++;
    }
    
    int modus = 0;
    
    for(int i = 0; i < 1001; i++){
        if(arr[i] >= arr[modus]){
            modus = i;
        }
    }
    
    cout << modus << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a, arr[101], i;
    
    for (i = 0; cin >> a; i++){
        arr[i] = a;
    }
    
    for (i-- ; i >= 0; i--){
        cout << arr[i] << endl;
    }
    
    return 0;
}

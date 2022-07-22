#include <iostream>
using namespace std;

int main(){
    int x, N;
    x = 0;
    cin >> N;
    
    for (int i = 0; i <= N; i++){
        for (int j = 0; j < i; j++) {
            if (x < 10 && x >= 0){
                cout << x;
                x += 1;
            } else if (x == 10) {
                cout << 0;
                x = 1;
            }
        }
        cout << endl;
    }
    
    return 0;
}

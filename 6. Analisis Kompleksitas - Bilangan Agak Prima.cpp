#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input, num, n = 0;
    bool isPrime = true;
    
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        cin >> num;
        
        for (int j = 2; j <= sqrt(num); j++) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << "YA" << endl;
        } else {
            for (int k = 1; k <= sqrt(num); k++) {
                if (num % k == 0) n += 2;
            }
            if (n>4) {
            cout << "BUKAN" << endl;
            } else {
            cout << "YA" << endl;
            }
            
        isPrime = true;
        n = 0;
        }
    
    }
    
    return 0;
}

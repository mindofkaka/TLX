#include <iostream>
using namespace std;

int main()
{
    int a, N;
  
    cin >> a;
  
    for (N = a; N > 0; N--) { 
        if (a % N == 0){ 
            cout << N << " ";
        }
    }
    cout << endl;
    return 0;
}

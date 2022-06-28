#include <iostream>

using namespace std;

int main (){ 
  int N;
  
  cin >> N;

  if(N <= 9){
    cout << "satuan" << endl;
    } else if (N <= 99){
    cout << "puluhan" << endl;
    } else if (N <= 999){
    cout << "ratusan" << endl;
    } else if (N <= 9999){ 
    cout << "ribuan" << endl;
    } else if (N <= 99999){
    cout << "puluhribuan" << endl;
    }
  
  return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main (){ 
  double N;
  
  cin >> N;

  double fl=floor(N);
  double ce=ceil(N);

  cout << fl << " " << ce << endl;
  
  return 0;
}
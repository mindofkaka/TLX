#include <iostream>

using namespace std;

int main (){ 
  int x1, y1, x2, y2, jarakx, jaraky;

  cin >> x1 >> y1 >> x2 >> y2;

  if (x1 - x2 >= 0){
    jarakx = x1 -x2;
  } else {
    jarakx = x2 - x1;
  }

  if (y1 - y2 >= 0){
    jaraky = y1 - y2;
  } else {
    jaraky = y2 - y1;
  }

  cout << jarakx + jaraky << endl;
  
  return 0;
}

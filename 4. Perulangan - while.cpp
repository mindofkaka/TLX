#include <iostream>

using namespace std;

int main() {
  
  char masukan[101];

  do {
    cin >> masukan;

    if(!cin.eof()) {
      cout << masukan << endl;
    }
  } while (!cin.eof());
  
  return 0;
}

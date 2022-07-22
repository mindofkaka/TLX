#include <iostream>
using namespace std;

int main() {
  int N, x;

  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> x;

    bool prime = true;
    if (x == 1) {
      prime = false;
    }

    int divisor = 2;
    while (divisor*divisor <= x) {
      if (x % divisor == 0) {
        prime = false;
        break;
      }
      divisor++;
    }

    if (prime == true) {
      cout << "YA" << endl;
    } else {
      cout << "BUKAN" << endl;
    }
    }
}

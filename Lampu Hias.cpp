#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll p, q, r, n, t;
	cin >> p >> q >> r >> n;
	while(n--){
		cin >> t;
		if((t%p == 0) && (t%q == 0) && (t%r == 0)){
			cout << "YA\n";
		}else{
			cout << "TIDAK\n";
		}
	}
}

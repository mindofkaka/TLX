#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m, p;
   
   cin >> n >> m >> p;
   
   int matriks1[n][m], matriks2[m][p];
   
   for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           cin >> matriks1[i][j];
       }
   }
   
   for(int i = 0; i < m; i++){
       for(int j = 0; j < p; j++){
           cin >> matriks2[i][j];
       }
   }
   
   int temp;
   for(int i = 0; i < n; i++){
       for(int j = 0; j < p; j++){
           temp = 0;
           for(int k = 0; k < m; k++){
               temp += matriks1[i][k] * matriks2[k][j];
           }
           cout << temp << " ";
       }
       cout << endl;
   }
   
    return 0;
}








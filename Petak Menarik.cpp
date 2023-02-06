#include <bits/stdc++.h>
using namespace std;
int main() {
	int N, M, K;
	bool ada;
	cin >> N >> M >> K;
	int arr[N+2][M+2];
	for(int i = 0; i < N+2; i++){
		for(int j = 0; j < M+2; j++){
			arr[i][j] = 1;
		}
	}
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			int kemenarikan = arr[j][i-1]*arr[j][i+1]*arr[j-1][i]*arr[j+1][i];
			if(kemenarikan == K){
				ada = true;
				cout << j << " " << i;
				break;
			}else{
				ada = false;
			}
		}
		if(ada){
			break;
		}
	}
	if(!ada){
		cout << "0 0";
	}
}
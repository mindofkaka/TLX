#include <bits/stdc++.h>
using namespace std;
int t, n, s[5];
int banyakPertandingan;
pair<int, int> p[15];

bool answer;

void bruteForce(int pertandinganKe, int skorSementara[]){
	if(pertandinganKe >= banyakPertandingan){
		bool isTrue = true;
		for(int i = 0; i < n; i++){
			if(skorSementara[i] != s[i]){
				isTrue = false;
			}
		}
		if(isTrue == true) answer = true;
		return;
	}
	int a = p[pertandinganKe].first;
	int b = p[pertandinganKe].second;
	
	int skorBaru[n];
	//Tim A win
	for(int i = 0; i < n; i++){
		skorBaru[i] = skorSementara[i];
	}
	skorBaru[a]+=3;
	bruteForce(pertandinganKe + 1, skorBaru);  
	
	//Tim B Win
	for(int i = 0; i < n; i++){
		skorBaru[i] = skorSementara[i];
	}
	skorBaru[b]+=3;
	bruteForce(pertandinganKe + 1, skorBaru);
	
	//Draw
	for(int i = 0; i < n; i++){
		skorBaru[i] = skorSementara[i];
	}
	skorBaru[a] += 1;
	skorBaru[b] += 1;
	
	bruteForce(pertandinganKe + 1, skorBaru);
	
	return;
}

int main() {
	cin >> t;
	while(t--){
		answer = false;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> s[i];
		
		banyakPertandingan = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				p[banyakPertandingan] = {i, j};
				banyakPertandingan++;
			}
		}
		
		int c[n];
		fill(c, c+n, 0);
		bruteForce(0, c);
		
		if(answer == true) cout << "YES\n";
		else cout << "NO\n";
	}
}
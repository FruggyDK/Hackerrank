#include <bits/stdc++.h>

using namespace std;

int main() {
	string S;
	int N;
	int T;
	
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		string even;
		string odd;
		cin >> S;
		N = S.length();
		
		for (int j = 0; j < N; j++) {
			if (j % 2 == 0) {
				even += S[j];
			} else {
				odd += S[j];
			}
		}
		
		cout << even << " " << odd << endl;
	}
	
	

	return 0;
}



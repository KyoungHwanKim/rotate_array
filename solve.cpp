#include <bits/stdc++.h>

using namespace std;

int n, before[10][10], after[10][10];

void rotate(int a[10][10], int b[10][10]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = a[n - j - 1][i];
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> before[j][n - i - 1];
			//cin >> before[i][j];
		}
	}
	
	//rotate(before, after);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << before[i][j] << ' ';
			//cout << after[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}

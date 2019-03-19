#include<iostream>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		int a[N][N], i = 0, j = 0, p, q, t = 1;
		bool flag = true;
		p = N*N;
		while (t <= p) {
			if (flag == true) {
				q = j;
				while (j < N) {		
					a[i][j] = t++; j++;
				}
				i++;
				j = q;
				flag = false; 
			}
			if (flag == false) {
				q = i;
				while (i < N) {
					a[i][j] = t++; i++;					
				}
				j++;
				i = q;
				flag = true;
			}
		}
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < N; m++) 
				cout << a[n][m] << ' ';
			cout << endl;
		}
	}
	return 0;
}

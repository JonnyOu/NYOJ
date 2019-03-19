/*
nyoj 852
分析:与蛇形填数差不多，具体看33 
*/

#include<iostream>
#include<cstring>
using namespace std;
const int maxSize = 1005;
int a[maxSize][maxSize];

int main() {
	int T;
	cin >> T;
	while (T--) {
		memset(a, 0, sizeof(a));
		int n, x, y, top, sum;
		cin >> n;
		x = 0, y = 0, top = 1, sum = 0;
		a[x][y] = 1;
		for (int i = 1; i <= n; i++) sum += i;
		while (top < sum) {
			while (y+1<n-x && !a[x][y+1]) a[x][++y] = ++top;
			while (x+1<n && y-1>=0 && !a[x+1][y-1]) a[++x][--y] = ++top;
			while (x-1>=0 && !a[x-1][y]) a[--x][y] = ++top;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n-i; j++) 
				cout << a[i][j] << ' ';
			cout << endl;
		}
	}
	return 0;
}

#include<cstdio>
using namespace std;
const int MaxSize = 110;

int a[MaxSize][MaxSize];

int main() {
	int n, top = 1, x, y;
	scanf("%d", &n);
	x = 0; y = n-1; 
	a[x][y] = 1;
	while (top < n*n) {
		while (x+1<n && !a[x+1][y]) a[++x][y] = ++top;
		while (y-1>=0 && !a[x][y-1]) a[x][--y] = ++top;
		while (x-1>=0 && !a[x-1][y]) a[--x][y] = ++top;
		while (y+1<n && !a[x][y+1]) a[x][++y] = ++top;  
	} 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

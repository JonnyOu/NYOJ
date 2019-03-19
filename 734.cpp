#include<cstdio>
#include<string.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, i, j, t, s = 1;
		scanf("%d", &n);
		int a[n][n];
		memset(a, 0, n*n*sizeof(int));
		t = n*n;
		i = 0; j = n/2;
		while (t--) {
			a[i][j] = (s++);
			int p, q;
			q = (j+1)%n;
			p = i-1;
			if (p == -1) p = n-1;
			if (a[p][q] != 0) i++; 
			else {
				i = p;
				j = q;
			}	
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) 
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0; 
}

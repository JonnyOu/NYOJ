#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int L, M, sum = 0;
		scanf("%d%d", &L, &M);
		int a[M][2], b[L+1];
		memset(b, 0, sizeof(b));
		for (int i = 0; i < M; i++) 
			for (int j = 0; j < 2; j++) 
				scanf("%d", &a[i][j]);
		for (int i = 0; i < M; i++) {
			for (int j = a[i][0]; j <= a[i][1]; j++) 
				if (b[j] == 0) b[j] = 1;
		}
		for (int i = 0; i < L+1; i++) 
			if (b[i] == 0) sum++;
		printf("%d\n", sum); 
	}
}

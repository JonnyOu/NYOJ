#include<stdio.h>
int main() {
	int n, m, sum, num;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		num = 0;
		for (int j = 1; j <= m; j++) {
			sum = 0;
			for (int k = 1; k <= j+1; k++) 
				sum += k;
			sum *= j;
			num += sum;
		}
		printf("%d %d %d\n", i,  m, num);
	}
} 

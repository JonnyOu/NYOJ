#include<stdio.h>
int main(void) {
	int n, m, sum;
	while (~scanf("%d", &n)) {
		sum = n + n / 5 * 5;
		for (int i = 0; i < n; i++) {
			scanf("%d", &m);
			sum += m;
		}
		printf("%d\n", sum);
	}
} 

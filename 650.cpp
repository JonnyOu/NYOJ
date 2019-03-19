#include<stdio.h>
int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		int num, sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			sum += num*num;
		}
		printf("%d\n", sum);
	}
} 

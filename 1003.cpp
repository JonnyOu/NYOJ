#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0) {
			printf("1\n");
			continue;
		}
		printf("%d\n", (2*n-1)*(2*n-1)+1);
	} 
} 

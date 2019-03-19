#include<stdio.h>
int main() {
	int n;
	while(~scanf("%d", &n)) {
		int a[n];
		a[0] = 1; a[1] = 1;
		for (int i = 1; i <= n; i++) {
			if (i >= 3) {
				a[i-1] = 1;
				for (int j = i-2; j > 0 ; j--) {
					a[j] = a[j] + a[j-1];
				}
			}
			for (int j = 0; j < i; j++) 
				printf("%d ", a[j]);
			printf("\n");
		}	
	}
}

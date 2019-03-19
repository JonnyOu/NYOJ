#include<stdio.h>
int main() {
	int n;
	while (scanf("%d", &n), n!= 0) {
		int a[n];
		float sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		printf("%.f\n", sum/n+0.5);
	}
}

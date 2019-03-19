#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		float destance, M, X, Y, Z;
		scanf("%f%f%f%f", &M, &X, &Y, &Z);
		destance = M*X*Z/(Y-X);
		printf("%.2f\n", destance);
	}
} 

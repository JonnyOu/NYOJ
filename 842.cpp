#include<stdio.h>
int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) && a && b) {
		for (int i = a*100; i < (a+1)*100; i++) {
			if (i % b == 0) printf("%02d ", i%100);
		}
		printf("\n");
	}
}

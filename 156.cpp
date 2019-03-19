#include<stdio.h>
int main() {
	double n;
	while (scanf("%lf", &n), n != 0.00) {
		double sum = 0;
		int count = 2;
		for (;;) {
			sum += 1/(double)count;
			if (sum >= n) break;
			count++;
		}
		printf("%d card(s)\n", count-1);
	}
}

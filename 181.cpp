#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		long long sum = 1, factorial;
		scanf("%d", &x);
		for (int i = 2; i <= x; i++) {
			factorial = 1;
			for (int j = 2; j <= i; j++)
				factorial *= j;
			if (i % 2 == 0) sum += factorial;
			else sum -= factorial;
		}
		printf("%lld\n", sum);
	}
}

/*
nyoj 333
≤Œ’’ nyoj 291 
*/

#include<stdio.h>
int main() {
	int n, ans;
	while (scanf("%d", &n) != EOF) {
		ans = n;
		for (int i = 2; i*i <= n; i++) {
			if (n%i == 0) {
				ans -= ans/i;
				while (n % i == 0) n /= i;
			}
		}
		if (n > 1) ans -= ans/n;
		printf("%d\n", ans);
	}
	return 0;
}


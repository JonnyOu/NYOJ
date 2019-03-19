#include<stdio.h>
#define maxn 100000
int main() {
	int n, a[maxn] = {1,1}, len = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		int k = 0, s;
		for (int j = 1; j <= len; j++) {
			s = a[j]*i+k;
			a[j] = s%10;
			k = s/10;
		}
		while (k != 0) {
			a[++len] = k%10;
			k /= 10;
		}
	}
	for (int i = len; i > 0; i--)
		printf("%d", a[i]);
}

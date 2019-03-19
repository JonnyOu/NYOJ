#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, a, b, count = 1;
		scanf("%d%d", &n, &a);
		for (int i = 1; i < n; i++) {
			scanf("%d", &b);
			if (a == b) count++;
			else {
				printf("%d %d ", count, a);
				a = b;
				count = 1;
			}
		}
		printf("%d %d\n", count, a);
	}
}

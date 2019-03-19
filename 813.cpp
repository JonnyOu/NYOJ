#include<stdio.h>
int main() {
	int n, k, t;
	while (scanf("%d%d", &n, &k) , n != 0 && k != 0) {
		t = 0;
		for (int i = 1; i <= n/2; i++) {
			if (i*(n-i) == k) {
				t = 1;
				printf("YES\n");
				break;
			}
		}
		if (t == 0) printf("NO\n");
	}
} 

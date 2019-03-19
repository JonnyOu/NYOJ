#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[n], sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] % 2 == 1) sum++; 
		}
		if (sum % 2 == 0) printf("%d\n", n-sum);
		else printf("%d\n", sum);
	}
}

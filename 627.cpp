#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[n], sum = 0;
		for (int i = 0; i < n; i++) {scanf("%d", &a[i]); sum += a[i];}
		if (sum % n == 0) printf("%d\n", n);
		else printf("%d\n", n-1);		
	}
}

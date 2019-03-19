#include<stdio.h>
int main() {
	int n; 
	scanf("%d", &n);
	while (n--) {
		int a, b, a_copy, b_copy;
		scanf("%d%d", &a, &b);
		a_copy = a; b_copy = b;
		while (a % b != 0) {
			int temp = a;
			a = b;
			b = temp % b;
		}
		printf("%d %d\n", b, a_copy*b_copy/b);
	}
}

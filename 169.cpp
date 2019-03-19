#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n);
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, min = 35, p = 2;
		scanf("%d", &m);
		for (int i = m-35; i <= m+35; i++) {
			if (i > 1 && prime(i) && (min >= abs(m-i))) {
				p = i;
				min = abs(m-i);
			}
		} 
		printf("%d\n", p);
	}
}

int prime(int n) {
	if (n == 0 || n == 1) return 0;
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) return 0;
	return 1;
}

#include<stdio.h>

int r(int n) {
	int sum = 0;
	while (n != 0) {
		sum = sum*10+n%10;
		n /= 10;
	}
	return sum;
}

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b), a && b) 
		printf("%d\n", r(a)+r(b));
	
}

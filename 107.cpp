#include<stdio.h>
int main() {
	int a, b, c, d, count = 1, temp;
	while (~scanf("%d%d%d%d", &a, &b, &c, &d)) {
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
		if (c > d) {
			temp = d;
			d = c;
			c = temp;
		}
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
		if (a > c) {
			temp = c;
			c = a;
			a = temp;
		}
		printf("Case %d: %d\n", count++, c+d);
	}
}

#include<stdio.h>
int gcd(int a, int b);
int main() {
	int a, b, c, m;
	while (~scanf("%d%d%d", &a, &b, &c)) {
		if (a == 0 || b == 0 || c == 0) {
			if (a < b) {
				int temp = b;
				b = a;
				a = temp;
			}
			if (b < c) {
				int temp = c;
				c = b;
				b = temp;
			}
			if (a < b) {
				int temp = b;
				b = a;
				a = temp;
			}
			if (a == 0) printf("0\n");
			else if (b == 0) printf("%d\n", a);
			else 
				printf("%d\n", a*b*2/gcd(a,b));
		}
		else {
			m = a*b/gcd(a,b);
	//		printf("%d\n", m);
			for (;;) {
				if (m%a==0 && m%b==0 && m%c == 0) {
					printf("%d\n", m*3);
					break;
				}
				m++;
			}	
		}
	}
}

int gcd(int a, int b) {
	while (a % b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return b;	
}

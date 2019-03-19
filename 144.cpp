//判断二元一次方程ax+by=c有整数解：a与b的最大公因数能被c整除
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		while (a % b != 0) {
			int temp = b;
			b = a % b;
			a = b;
		}
		if (c % b == 0) printf("Yes\n");
		else printf("No\n");
	}
} 

//求最小公倍数 
#include<stdio.h>
//最大公约数
int gcd(int n, int m) {
	while (n % m != 0) {
		int temp = n;
		n = m;
		m = temp % m;
	}
	return m;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		scanf("%d%d", &n, &m);
		if (gcd(m, n) == 1) printf("Possible\n");
		else printf("Impossible\n");
	}
	return 0;
} 

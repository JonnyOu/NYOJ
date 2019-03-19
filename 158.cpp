#include<stdio.h>
//组合数函数
long long C(int n, int m) {
	if (m < n-m) m = n-m;
	long long ans = 1;
	for (int i = m+1; i <= n; i++) ans *= i;
	for (int i = 1; i <= n-m; i++) ans /= i;
	return ans;
} 

int main() {
	int n, m;
	while (~scanf("%d%d", &n, &m)) {
		long long sum = 1;
		while (n >= m) {
			sum *= C(n, m);
			n -= m;
		}
		printf("%lld\n", sum%2013);
	}
		
}

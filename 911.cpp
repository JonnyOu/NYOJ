#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		long long m,sum;
		scanf("%lld", &m);
		sum = m/5 + m/6 + m/8 - m/30 - m/40 -m/24 + m/120; 
		printf("%lld\n", m-sum);
	}
}

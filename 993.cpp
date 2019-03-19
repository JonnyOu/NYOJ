#include<stdio.h>
int main() {
	long long n, sum;
	int m1, m2, max;
	while (~scanf("%lld%d%d", &n, &m1, &m2)) {
		sum = 0;
		m1>m2?max=m1:max=m2;
		for (;;) {
			if (max%m1==0 && max%m2==0) break;
			max++;
		}
		if (n % m1 == 0) sum += (n/m1-1);
		else sum += n/m1;
		if (n % m2 == 0) sum += (n/m2-1);
		else sum += n/m2;
		if (n % max == 0) sum -= (n/max-1);
		else sum -= n/max;
		printf("%lld\n", sum);
	}
}

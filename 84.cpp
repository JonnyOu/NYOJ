//http://blog.163.com/taoqibao_tao/blog/static/122906690200962784627562/
#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long n, sum = 0, i = 5;
		scanf("%lld", &n);
		while (i <= n) {sum += n/i; i *= 5;}
		printf("%lld\n", sum);
	}
} 

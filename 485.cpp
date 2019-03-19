/*
9余数定理
(a * b) % n = (a%n) * (b%n) % n
对于一个整数n，设f(n)为n的各个位数的和, 根据同余定理，有n % 9 = f(n) % 9 
*/

#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long a, b;
		scanf("%lld%lld", &a, &b);
		if (a == 0 || b == 0) {
			printf("0\n");
			continue;
		}
		else {
			int t = (a%9) * (b%9) % 9;
			if (t == 0) printf("9\n");
			else printf("%d\n", t);
		}
	}
	return 0;
} 

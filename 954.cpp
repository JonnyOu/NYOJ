/*
954
一个整数有多少个质因子2，则对应二进制有多少个0 
*/

#include<cstdio>
using namespace std;

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int sum = 1, t = 2;
		for (;;) {
			if (t > n) break;
			sum += n / t;
			t *= 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}

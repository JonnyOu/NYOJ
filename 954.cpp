/*
954
һ�������ж��ٸ�������2�����Ӧ�������ж��ٸ�0 
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

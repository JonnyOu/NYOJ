#include<cstdio>
using namespace std;

//判断各位数的乘积
int CJ(int n) {
	int s = 1;
	while (n != 0) {
		s *= (n%10);
		n /= 10;
	}
	return s;
} 

int main() {
	int n, flag;
	while (~scanf("%d", &n)) {
		flag = 0;
		for (int i = 1; i <= 5000; i++) {
			if (CJ(i) == n) {
				printf("%d\n", i);
				flag = 1;
				break;
			}
		}
		if (flag == 0)	printf("-1\n");
	}
	return 0;
} 

//欧拉公式 
#include<cstdio>
#include<cmath>
using namespace std;

//质数判断 
bool ZhiShu(int n) {
	long long t = sqrt(n);
	for (int i = 2; i <= t; i++) {
		if (n % i == 0) 
			return false;
	}
	return true;
}

int euler(int n) {
	int s = n;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			s = s-s/i;
			while (n % i == 0) n /= i; 
		}
 	}
 	if (n > 1) s = s-s/n;
	return s;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		if (n == 1) {
			printf("0\n");
			continue;
		}
		if (ZhiShu(n)) {
			printf("1\n");
			continue;
		}
		int sum = 1;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				if (ZhiShu(i)) sum += i-1;
				else sum += euler(i);
			}
//			printf("%d %d\n", sum, i);
		}
		printf("%d\n", sum);
	}
	return 0;
}

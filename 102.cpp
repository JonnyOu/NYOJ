#include<cstdio>
using namespace std;
//¶þ·ÖÇóÃÝ 
long long pow(long long a, long long n, long long b) {
	long long result = 1;
	a = a % b;
	while(n > 0) {
		if (n % 2 == 1) 
			result = result*a%b;
		n = n / 2;
		a = a * a % b;
	}
	return result;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		printf("%lld\n", pow(a, b, c));
	}
	return 0;
}

#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long n, m, sum = 0, t = 1;
		scanf("%lld%lld", &n, &m);
		while (pow(m, t) <= n) {
			sum += (n / pow(m, t));
			t++;
		}
		printf("%lld\n", sum);
	}
	return 0;
}

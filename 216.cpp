/* 
n+1 = (i+1)*(j+1)
*/

#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long N, sum = 0, k;
		scanf("%lld", &N);
		k = (long long)sqrt(N+1); 
		for (int i = 1; i+1 <= k; i++) 
			if ((N+1)%(i+1) == 0) sum++;
		printf("%lld\n", sum);
	}
	return 0;
} 


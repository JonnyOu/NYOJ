#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, sum = 0;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		sort(a, a+n);
		n--;
		if (n == 0) {
			printf("%d\n", a[0]); continue;
		}
		for (;;) {
			if (n == 1 || n == 2) break;
			sum += min(a[n] + a[0] + 2*a[1], a[n] + a[n-1] + 2*a[0]);
			n -= 2;
		}
		if (n == 2) sum += a[2] + a[0] + a[1]; 
		if (n == 1) sum += a[1];
		printf("%d\n", sum);   
	}
	return 0;
}

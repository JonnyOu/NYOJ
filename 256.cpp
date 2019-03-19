#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		double s = 0, k, n = 1;
		scanf("%lf", &k);
		for (;;) {
		//	printf("%lf %lf %lf\n", s, k, n);
			if (s > k) break;
			s += 1/(n++);
		}
		printf("%.lf\n", n-1);
	}
}

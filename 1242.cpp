#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m, t;
		double sum = 0, s;
		scanf("%d%d", &n, &m);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i <= n-m; i++) {
			for (int j = 0; j <= n-(m+i); j++) {
				s = 0;
				for (int k = j; k < j+(m+i); k++) 
					s += a[k];
			//	printf("%.lf\n", s);
				if ((sum/t) < (s/(m+i))) {
					sum = s;
					t = m+i;
				}
			}
		}
		printf("%d\n", (int)((sum/t)*1000));
	}
	return 0;
}

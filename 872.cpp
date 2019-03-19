#include<stdio.h>
int main() {
	int S, n;
	while (~scanf("%d%d", &S, &n)) {
		int a[n], count, note;
		long long m, k;
		for (int i = 0; i < n; i++) 
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) {
			note = S;
			count = 1;
			k = 1;
			m = 1;
			for (int j = 0; j < a[i]; j++) {
				m = m * (note--);
				k = k * count;
				count++;
			} 
			S -= a[i];
			printf("%lld ", m/k);
		}
		printf("\n");
		
	}
} 

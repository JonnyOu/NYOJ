#include<stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) && n) {
		int a[n], j, k;
		long long sum, M = 0;
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) {
			j = i-1; k = i+1;
			for (;;) {
				if ((a[i]>a[j]||j==-1) && (a[i]>a[k]||k==n)) break;
				if (a[j]>=a[i] && j>=0) j--;
				if (a[k]>=a[i] && k<=n-1) k++;
				//printf("%d %d\n", j, k);
			}
			sum = (k-j-1)*a[i];
			//printf("%lld\n", sum);
			if (M < sum) M = sum; 
		}
		printf("%lld\n", M);
	}
} 

/*7 2 1 4 5 1 3 3

4 1000 1000 1000 1000
*/

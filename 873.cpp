#include<stdio.h>
int main() {
	int n, m;
	while (~scanf("%d%d", &n, &m)) {
		int a[n], b;
		long long M = 0, note;
		for (int i = 0; i < n; i++) 
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) {
			note = 0;
			for (int j = i; j < i+m; j++) {
				note += a[j%n];
			}
			if (M < note) {
				M = note;
				b = i;	
			} 
		}
		printf("%lld %d %d\n", M, b+1, (b+m-1)%n+1);
	}
}

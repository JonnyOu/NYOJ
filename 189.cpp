#include<stdio.h>
#include<string.h>
int main() {
	int m, n;
	while (~scanf("%d%d", &m, &n)) {
		if (m == 1 || n == 1) {
			printf("YES\n");
			continue;
		}
		int a[n], count = 0, flag = 0;
		memset(a, 0, sizeof(a));
		for (;;) {
			if (a[count]) break;
			a[count] = 1;
			count = (count+m)%n;
		}
//		for (int i = 0; i < n; i++) 
//			printf("%d ", a[i]);
//		printf("\n");
		for (int i = 0; i < n; i++) {
			if (!a[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) printf("YES\n");
		else printf("NO\n");
	}
}

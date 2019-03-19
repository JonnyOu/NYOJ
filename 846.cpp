#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int b, e, k, m, count = 1, note1, note2;
		scanf("%d%d%d", &b, &e, &k);
		m = (b+e)/2;
		for (;;) {
			if (m == k) break;
			count++;
			if (m < k) {
				b = m+1;
				m = (m+1+e)/2;
			}
			else {
				e = m;
				m = (m+b)/2;
				
			}
//			printf("%d ", m);
//			printf("\n");
		}
		if (count % 2 == 0) printf("Lose\n");
		else printf("Win\n");
	}
}

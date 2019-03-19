#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, m, sum, count;
	scanf("%d", &n);
	while (n--) {
		sum = 0; 
		count = 1;
		scanf("%d", &m);
		for (;;) {
			sum += count;
			if (sum >= m) break;
			count++;
		}
		if (count % 2 == 0) 
			printf("%d/%d\n", count-abs(sum-m), 1+abs(sum-m));
		else 
			printf("%d/%d\n", 1+abs(sum-m), count-abs(sum-m));
	}
}

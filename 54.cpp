#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a[12], count, num = 0, temp = 1, sum = 0;
		for (int i = 0; i < 12; i++) 
			scanf("%d", &a[i]);
		for (int i = 0; i < 12; i++) {
			count = 0;
			for (;;) {
				if (300+num-a[i]-count*100 < 100) break;
				count++;
			}
			num = 300+num-a[i]-count*100;
			if (num < 0) {
				printf("-%d\n", i+1);
				temp = 0;
				break;
			}	
			sum += count;
		}
		if (temp == 1) {
			printf("%d\n", sum*120+num);
		}
	}
}


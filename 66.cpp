#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	while (n--) {
		int k, x;
		scanf("%d", &k);
		for (int i = k + 1; i <= 2 * k; i++) {
			x = k * i / (i - k);//use 1/k = 1/x + 1/y equation  
			if (x >= i && x * i / (x + i) == k) //because x is int,there are errors,so we havt to add the second code. 
				printf("1/%d=1/%d+1/%d\n", k, x, i);
		}
	}
	return 0;
} 


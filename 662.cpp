#include<stdio.h>
int main()
{
	int n,sum;
	while (scanf("%d", &n), n != 0) {
		sum = 0;
		while (n > 2) {
			sum += n/3;//换来的汽水 
			n = n/3 + n%3;//换来的汽水瓶+剩下的汽水瓶 
		}
		if (n == 2) sum++;
		printf("%d\n", sum);
	}
} 

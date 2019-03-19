#include<stdio.h>
int main()
{
	int n,m,a[3],b[3],sum;
	while(scanf("%d%d",&n,&m),n!=0&&m!=0) {
		sum = 0;
		if (n % 10 + m % 10 >= 10) sum++;
		if (n % 100 + m % 100 >= 100) sum++;
		if (n + m >= 1000) sum++;
		printf("%d\n", sum);
	} 
	return 0;
} 

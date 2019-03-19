#include<stdio.h>
int main()
{
	long long  m=1,n;
	while(scanf("%lld",&n)!=EOF)
	{
		for(int i = 2; i <= n; i++)
		m*=i;
		printf("%lld",m);
		printf("\n");
	}
	return 0;
}

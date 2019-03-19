#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,x;
		scanf("%d",&m);
		x = m / 5;
		if(m < 9)
		printf("1\n");
		else if(m % 5 != 0)
		printf("%d\n",x);
		else printf("%d\n",x - 1);
	} 
	return 0;
}

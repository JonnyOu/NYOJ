#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n/100;
		b=n%10;
		c=n%100/10;
		if(n==a*a*a+b*b*b+c*c*c) printf("Yes\n");
		else printf("No\n");
		scanf("%d",&n);
	}
} 

#include<stdio.h>
int main()
{
	int i,a,b,c;
	scanf("%d",&i);
	for(int n=1;n<=i;n++)
	{
		scanf("%d",&a);
		for(b=1;b<=a;b=b+2)
		printf("%d\t",b);
		printf("\n");
		for(c=2;c<=a;c=c+2)
		printf("%d\t",c);
	}
	
} 

#include <stdio.h>
int main( void )
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		float a,b,c,d;
		scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
		if((a/b) >= (c/d))
		printf("iphone 5S\n");
		else
		printf("iphone 5C\n");
	}
}

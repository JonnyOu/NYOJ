#include<stdio.h>
int main( void )
{
	int n;
	scanf("%d", &n); 
	while(n--)
	{
		int a,b;
		scanf("%x%x", &a, &b);
		printf("%o\n", a + b);
	}
	return 0;
} 

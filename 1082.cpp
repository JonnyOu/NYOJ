#include <stdio.h>
int main( void )
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int x,y;
		scanf("%d%d", &x, &y);
		if(x % y == 0)
		printf("%d\n", x / y);
		else 
		printf("%d\n", x / y + 1);
	}
} 

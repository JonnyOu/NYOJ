#include <stdio.h>

int main( void )
{
	int n;
	while(scanf("%d", &n), n != 0)
	{
		int n1 = n, n2 = n, n3 = n, m = n;
		int a = 0, b = 0, c = 0;
		while(n1 != 0)
		{
			a += n1 % 10;
			n1 = n1 / 10;
		}
		while(n2 != 0)
		{
			b += n2 % 12;
			n2 = n2 / 12;
		}
		while(n3 != 0)
		{
			c += n3 % 16;
			n3 = n3 / 16;
		}
		if(a == b && b == c && a == c)
		printf("%d is a Sky Number.\n", m);
		else
		printf("%d is not a Sky Number.\n", m);
	}
	return 0;
}

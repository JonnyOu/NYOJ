#include <stdio.h>

int main( void )
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int m;
		scanf("%d", &m);
		if( m == 1 || m == 0)
		m = 1;
		printf("%d\n", m); 					
	}
	return 0;
}

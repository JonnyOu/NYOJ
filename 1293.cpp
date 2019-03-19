#include <stdio.h>
int main( void )
{
	int c1,m1,e1,c2,m2,e2;
	while(scanf("%d%d%d%d%d%d", &c1, &m1, &e1, &c2, &m2, &e2) != EOF)
	{
		if(e1 < 90 && e2 < 90)
		printf("-1\n");
		else if(e1 < 90 || c1 + m1 + e1 < c2 + m2 + e2)
		printf("2\n");
		else if(e2 < 90 || c1 + m1 + e1 > c2 + m2 + e2)
		printf("1\n");
	}
}

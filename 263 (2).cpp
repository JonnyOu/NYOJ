#include<stdio.h>
int main(void)
{
	int n,m,x,y,z,x0,y0,z0;
	scanf("%d", &n);
	while(n--)
	{
		x0 = 0;
		y0 = 0;
		z0 = 0;
		scanf("%d", &m);
		while(m--)
		{
			scanf("%d%d%d", &x, &y, &z);
			if(x > x0 || (x == x0 && y < y0) || (x == x0 && y == y0 && z > z0))
			{x0 = x; y0 = y; z0 = z;}
		}
		printf("%d\n", z0);
	}
}

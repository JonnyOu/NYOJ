#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int x, y, s;
		scanf("%d%d", &x, &y);
		s = x;
		while (x >= y)
		{
			x -= y;
			s++;
			x += 1;
		}
		printf("%d\n", s);
	}
}

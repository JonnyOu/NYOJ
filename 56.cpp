#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int x, y, j, s = 0;
		scanf("%d%d", &x, &y);
		for (int i = y; i <= x; i+=y)
		{
			j = i; 
			while (j % y == 0)
			{
				s++;
				j /= y;
			}
		}
		printf("%d\n", s);
	}
} 

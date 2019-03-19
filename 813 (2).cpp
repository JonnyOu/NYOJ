#include<stdio.h>
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y), x != 0 || y != 0)
	{
		int tag = 0;
		for (int i = 1; i <= x / 2; i++)
		{
			if (i * (x - i) == y)
			{
				tag = 1;
				break;
			}
		}
		if (tag == 1)
		puts ("YES");
		else 
		puts ("NO");
	}
} 

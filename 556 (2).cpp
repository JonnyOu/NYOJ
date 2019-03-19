#include<stdio.h>
int main()
{
	int x,y;
	while(scanf("%d%d", &x, &y) != EOF)
	{
		for(int i = x; i > 0; i--)
		{
			if(x % i == 0 && y % i == 0)
			{
			printf("%d\n", i);
			break;
			}
			else continue;
		}
	}
	return 0;
}

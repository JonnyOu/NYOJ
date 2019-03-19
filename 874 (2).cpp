#include<stdio.h>
int main()
{
	int x,y;
	while (scanf("%d%d", &x, &y) != EOF)
	{
		if (y < 5)
		printf("%d\n", x + y);
		else 
		printf("%d\n", x + 10 + (y - 5) / 4 * 9 + (y - 5) % 4);
	}
}

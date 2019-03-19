#include<stdio.h>
int main()
{
	int x,y;
	while (scanf("%d%d", &x, &y) != EOF)
	{
		if (y < 5)
		printf("%d\n", x + y);
		if (y == 5)
		printf("%d\n", x + y + 5);
		if (y > 5)
		{
			int s = 0;
			y -= 5;
			while (y > 3)
			{
				y -= 4;
				s++;
			}
			s = (s + 2) * 5 + s * 4 + y + x;  //s = s * 9 + x + y + 10;
			printf("%d\n", s);
		}
	}
	return 0;
}

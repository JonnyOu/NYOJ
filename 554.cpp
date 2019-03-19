#include<stdio.h>
int main()
{
	int x,y;
	while(scanf("%d%d", &x, &y) != EOF)
	{
		for (int i = x; i <= y; i++)
		if(i % 3 == 0)printf("%d ", i);
		printf("\n");
	}
}

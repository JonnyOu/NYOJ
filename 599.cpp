#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int m,a[10];
		for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
		if (n == 0) printf("0\n");
		else
		{
			for (int i = 0; i < 10; i++)
		{
			if(a[i] == 1) ++n;
			else --n;
			if(n == 0)
			{
				m = i + 1;
				break;
			}
			else m = 10;
		}	
		printf("%d\n", m);
		}
	
	}
} 

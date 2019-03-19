#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int m, x, k = 0,ch[1000], ph[1001] = {0};
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			ph[x]++;
		}
		for (int i = 1; i <= 1000; i++)
		{
			if (ph[i] != 0)
			{
				ch[k] = i;
				k++;
			}
		}
		printf("%d\n", k);
		for (int i = 0; i < k; i++)
		printf("%d ", ch[i]);
		printf("\n");
	}
} 

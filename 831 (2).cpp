#include<stdio.h>
int main()
{
	int n, a[200]; 
	while (scanf("%d", &n) != EOF)
	{
		int m = 0, sum = 0, b[6] = {0};
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
	   if(n >= 5)
		m = 5 * (n / 5);
		for (int i = 1; i < 6; i++)
			sum += i * b[i];
			sum += m + n;
		printf("%d\n", sum);
	}
} 

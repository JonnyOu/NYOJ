#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ch[100000] = {1,1};
	int len = 1;
	for (int i = 2; i <= N; i++)
	{
		int k = 0;
		for (int j = 1; j <= len; j++)
		{
			int s = ch[j] * i + k;
			ch[j] = s % 10;
			k = s / 10;
		}
		while (k != 0)
		{
			ch[++len] = k % 10;
			k /= 10;
		}
	}
	for (int i = len; i >= 1; i--)
	printf("%d", ch[i]);
} 

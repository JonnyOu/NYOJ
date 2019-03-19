#include<stdio.h>
#include<string.h>
const int N = 10001;
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		char a[N], b[11];
		int M,m,sum = 0;
		gets(a);
		gets(b);
		M = strlen(a);
		m = strlen(b);
		for (int i = 0; i <= M - m + 1; i++)
		{
			if(a[i] == b[0])
			{
				int k = 0, tag = 0;
				for (int j = i; j < i+m; j++)
				{
					if(a[j] != b[k])
					{
						tag = 1;
						break;
					}
					++k;
				}
				if(tag == 0)sum++;
			}
		} 
		printf("%d\n", sum);
	}
} 

#include<stdio.h>
#include<math.h>
const int N = 1000000;
void prime(int m);
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int m;
		scanf("%d", &m);
		prime(m);
	}
}
int a[N + 1] = {0};
void prime(int m)
{
	int M = sqrt(m);
	for (int i = 2; i <= M; i++)
	{
		if(a[i] == 0)
		{
			for (int j = i * i; j <= m; j+=i)
			a[j] = 1;
		}
	}
	int sum = 0;
	if(m > 2) sum+=1;
	for (int i = 3; i < m - 1; i++)
	{
		if(a[i] == 0 && a[i + 2] == 0)
		sum += 1;
	}
	printf("%d\n", sum);
}

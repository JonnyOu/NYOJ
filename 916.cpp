#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int m,a[100],b[100];
		while(scanf("%d", &m) != EOF)
		{
		for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
		for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
		sort(a,a+m);
		sort(b,b+m);
		for (int i = m - 1; i > -1; i--)
		printf("%d %d ", a[i], b[i]);
		printf("\n");
		}
} 

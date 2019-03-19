#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,a[100],sum = 0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
		sort(a,a+m);
		for (int i = 0; i < m; i++)
		sum += a[i] * (m - i);
		printf("%d\n", sum); 
		sum = 0; 
	} 
}

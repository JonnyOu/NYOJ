#include<stdio.h>
#include<algorithm>
using namespace std;
int main() 
{
	int n, a[1000];
	char b[1000];
	while(scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		sort(a,a+n);
		for (int i = 0; i < n; i++)
		b[i] = a[i] % 26 + 'A';
		for (int i = 0; i < n; i++)
		printf("%c ", b[i]);
		printf("\n");
	}
}

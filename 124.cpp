#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,m,x;
	scanf("%d", &n);
	while(n--)
	{
	    int ch[1000];
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		scanf("%d", &ch[i]);
		sort(ch,ch+m); 
		printf("%d\n", ch[(m - 1) / 2]);	
	}
	return 0;
} 

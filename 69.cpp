#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m;
		double s = 0;
		scanf("%d",&m);
		for(int i = 1; i <= m; i++)
		{
			s+=log10(i);
		}
		printf("%d\n",(int)s+1);
	}
	return 0;
}

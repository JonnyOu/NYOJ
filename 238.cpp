#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,a[100],max,min,s;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
		max=min=a[0];
		for(int i=0;i<m;i++)
		{
			if(max<a[i])
			max=a[i];
			if(min>a[i])
			min=a[i];
		}
		s=max-min;
		printf("%d\n",s);
	}
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int s=0,k=0,m,y,a[1000];
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		for(int i=0;i<m;i++)
		{
			if(a[i]==1)
			{
			k+=1;
			}
			else
			{
				for(int j=2;j<a[i];j++)
				{
					if(a[i]%j==0)
				{
					k+=a[i];
					break;
				}
				    else continue;
				}	
			} 	
		}
		y=s-k;
		printf("%d",y);	
	}
}


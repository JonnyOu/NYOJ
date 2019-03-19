#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		
		int s=0,m,a[100],b[100],min1,min2,x1,x2;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++)
		{
			min1=a[i];
			x1=i;
			for(int j=i;j<m;j++)
			{
				if(min1>a[j])
				{
			    	min1=a[j];
			    	x1=j;
				}	
				else continue;
			}
		    a[x1]=a[i];
			a[i]=min1;
		}
			for(int i=0;i<m;i++)
		{
			scanf("%d",&b[i]);
		}
		for(int i=0;i<m;i++)
		{
			min2=b[i];
			x2=i;
			for(int j=i;j<m;j++)
			{
				if(min2>b[j])
				{
			    	min2=b[j];
			    	x2=j;
				}	
				else continue;
			}	
			b[x2]=b[i];
			b[i]=min2;
		}			
		for(int i=0;i<m;i++)
		{
			if(a[i]>b[i])
			s+=1;
			else if(a[i]<b[i])
			s-=1;
			else 
			s+=0;
		}
		if(s>0)
		printf("X\n");
		else if(s<0)
		printf("Y\n");
		else 
		printf("none\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		for(int j=1;j<=m;j++)
		{		
				for(int i=j;i<10;i++)
			{
				printf("%d*%d=%d ",j,i,i*j);				
		    }
		    printf("\n");
	    }
	     printf("\n");
    } 
} 

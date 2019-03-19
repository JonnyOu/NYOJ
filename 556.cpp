#include<stdio.h>
int main()
{
	int x,y,m;
	while(scanf("%d,%d",&x,&y)!=EOF)
	{
		while(y!=0)
		{
		    m = x % y;
		    x = y;	
		    y = m;
		}
		printf("%d\n",x);	  
	}
	return 0;
}

                             

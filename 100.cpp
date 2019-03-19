#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int y,m,s=0;
		scanf("%d",&m);
		while(m!=0)
		{
			y=m/2;
	    	if(m!=y*2)
	    	s+=1;
	    	m=y;
		}
		printf("%d\n",s);		
	}
}

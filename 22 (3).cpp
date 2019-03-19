#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,s=0,a[1000];
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
	    for(int i=0;i<m;i++)
	    {
	    	for(int j=2;j<a[i];j++)
	    	{
	    		if(a[i]%j==0)
	    	    break;
	         	if(a[i]==j)
	        	s+=a[i];
	    	}
	    	
	    }
		printf("%d",s);	
	}
}

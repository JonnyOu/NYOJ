#include<stdio.h>
int main()
{
	int n,m,a[1000]={0};
	scanf("%d%d",&n,&m);
	for(int i = 2; i <= m; i++)
	{
	    for (int j = i; j <= n; j += i) {
	    	if (a[j] == 0)
	    	   a[j] = 1;
  	   		else
			   a[j] = 0;    
	    } 
	}
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0) printf("%d ",i);
	}
}

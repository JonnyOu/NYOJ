#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[90];
	while(scanf("%d",&n)!=EOF)
	{
	int	i = 0;
	    if(n == 0)
	    {
	    	 printf("0");
	    	 printf("\n");
	    }
	   
	    else{
	    while(n != 1)
		{   
		    if(n % 2 == 1)
		    a[i] = 1;
		    else a[i] = 0;
			n /= 2;	
			i++;	
        }
        a[i] = 1;
        for(int j = i; j > -1; j--)
        printf("%d",a[j]);
        printf("\n");
	    }
	
    }
    return 0;
}

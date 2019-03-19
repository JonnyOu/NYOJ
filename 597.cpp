#include<stdio.h>
int main( void )
{
	int n;
	while(scanf("%d", &n),n != -1)
	{   
	    int sum = 1;
		for (int i = 2; i <= n/2; i++)
		{
			if(n % i == 0)
			sum += i;	
		} 
		if(sum != n || n == 1)
		printf("No\n");
		else
		{
			printf("%d=1", n);
			for (int i = 2; i <= n/2; i++)
			{
				if(n % i == 0)
				printf("+%d", i);
			}	
			printf("\n");
		}
	}
	return 0;
}


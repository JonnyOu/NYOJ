#include<stdio.h>
int main( void )
{
	int n;
	while (~scanf("%d", &n))
    {	
	    int m = 0;
    	while ( n != 1)
    	{
    		m++;
    		if(n % 2 != 0)
    		n = 3 * n + 1;
    		else 
    		n /= 2;
    	}
    	m %= 3;
    	printf("%d\n", m);
    }
    return 0;
} 

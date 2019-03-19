#include<stdio.h>
int main()
{
	int n,sum = 0;
	char m;
	while(scanf("%d%c", &n, &m) != EOF)
	{
		sum += n;
		if(m == '\n')
		{
		 printf("%d\n", sum);
		 sum = 0;
    	}		
	}
}

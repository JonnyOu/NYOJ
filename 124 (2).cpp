#include<stdio.h>
int main( void )
{
	int n,m,ch[1000];
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		scanf("%d", &ch[i]);
		for (int i = 0; i < m; i++)
		{
			int min = ch[i], x = i;
			for (int j = i + 1; j < m; j++)
			{
				if(min > ch[j])
				{
					min = ch[j];
					  x = j;
				} 
				
			}
			    int temp = ch[i];
				   ch[i] = min; 
				   ch[x] = temp;
		}
			
		printf("%d\n", ch[(m - 1) / 2]);
	}
	return 0;
} 

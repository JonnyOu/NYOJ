#include <stdio.h>
int main( void )
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int m, ch[1000][3];
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		scanf("%d%d%d", &ch[i][0], &ch[i][1], &ch[i][2]);
		int max = ch[0][0];
		for (int i = 0; i < m; i++)
		if(max < ch[i][0]) max = ch[i][0];	
		int th[1000][2], k = 0;
		for (int i = 0; i < m; i++)
		{
			if(ch[i][0] == max)
			{
				th[k][0] = ch[i][1];
			    th[k][1] = ch[i][2];
			    k++;
			}
		}
		int min = th[0][0];
		for (int i = 0; i < k; i++)
		if(min > th[i][0]) min = th[i][0];	
		int ph[1000], j = 0;
		for (int i = 0; i < k; i++)
		{
			if(th[i][0] == min)
			{
				ph[j] = th[i][1];
				j++;
			}
		}
		int M = ph[0];
		for (int i = 0; i < j; i++)
		if(M < ph[i])
		M = ph[i];
	   printf("%d\n", M);
}
}
			
		
		
	


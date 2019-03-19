#include <stdio.h>
void matrix(int m, int n, int k);
int main( void )
{
	int m, n, k;
	scanf("%d%d%d", &m, &n, &k);
	while( m != 0 && n != 0 && k != 0)
	{
		matrix(m,n,k);
	    scanf("%d%d%d", &m, &n, &k);
	}
	return 0;	
}

void matrix(int m, int n, int k)
{
	int ptr[50][50],str[50][50],etr[50][50] = {0};
	for (int i = 0; i < m; i++)
	for (int j = 0; j < n; j++)
	    scanf("%d", &ptr[i][j]);
	for (int i = 0; i < n; i++)
	for (int j = 0; j < k; j++)
	    scanf("%d", &str[i][j]);
	for (int i = 0; i < m; i++)
	for (int j = 0; j < k; j++)
	for (int l = 0; l < n; l++)
	    etr[i][j] = etr[i][j] + ptr[i][l] * str[l][j];
	for (int i = 0; i < m; i++)
	{
	for (int j = 0; j < k; j++)
	printf("%d ", etr[i][j]);	
	printf("\n");  
	}	
	printf("\n");  
}

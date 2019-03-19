#include<stdio.h>
#include<string.h>
int main( void )
{
	int n;
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		char ch[1001], ph[1001];
		int th[3] = {0}, m;
		gets(ch);
		m = strlen(ch);//printf("%d\n",m);
		for (int i = 0; i < m; i++)
		{
			if(ch[i] == 'R')
			th[0]++;
			else if(ch[i] == 'W')
			th[1]++;
			else
			th[2]++;
		}//printf("%d %d %d\n", th[0],th[1],th[2]);
		for (int i = 0; i < m; i++)
		{
			if(i < th[0])
			ph[i] = 'R';
			else if(i < th[0] + th[1] && i >= th[0])
			ph[i] = 'W';
			else 
			ph[i] = 'B';
		}
	    for (int i = 0; i < m; i++)
	    printf("%c", ph[i]);
	    printf("\n");
	}
} 

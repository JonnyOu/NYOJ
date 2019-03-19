#include <stdio.h>
#include <string.h>
void max(char *ch, int m);

int main( void )
{
	int n,m;
	scanf("%d", &n);
	getchar();
	
	while(n--)
	{
		char ch[101];
		scanf("%s", &ch);
		m = strlen(ch);
		if(m == 1 && ch[0] == '0')
		{
			printf("0 0");
			printf("\n");
		}
		else
		{
		max(ch,m);
		printf("%s ", ch);
		for (int i = m - 1; i > -1; i--)
		{
			if(ch[i] != '0')
			printf("%c", ch[i]);
		}
		printf("\n");
		}
		
	}
	return 0;
} 

void max(char *ch, int m)
{
	char max,x;
	for (int i = 0; i < m; i++)
		{
			max = *(ch + i);
			x = i;
			for (int j = i + 1; j < m; j++)
			{
				if(max < *(ch + j))
			    {
			    	max = *(ch + j);
				    x = j;
			    }
			}
		    *(ch + x) = *(ch + i) ;
			*(ch + i) = max; 
		}
}
	

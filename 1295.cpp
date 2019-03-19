#include <stdio.h>
#include <string.h>
int main( void )
{
	char ch[20];
	int n;
	while(scanf("%s", &ch),ch[0] != '0')
	{
		n = strlen(ch);
		
		if(ch[0] != '-')
		{
			printf("%s", ch);
		    printf("\n");
		}
		else
		for (int i = 1; i < n; i++)
		printf("%c", ch[i]);
		 printf("\n");
	}
}

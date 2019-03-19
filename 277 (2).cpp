#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int m;
		char ch[6], ph[6];
		scanf("%d", &m);
		getchar();
		gets(ch);
		while(--m)
		{
			gets(ph);
			if(strcmp(ch,ph) > 0)
			strcpy(ch,ph);
		}
		puts(ch);
	} 
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char ch[12];
		scanf("%s",&ch);
		for(int i = 0; i < 11; i++)
		{
			if(ch[i] >= 'a' && ch[i] <= 'o')
			ch[i] = (ch[i] - 'a') / 3 + '2';
			if(ch[i] >= 'p' && ch[i] <= 's')ch[i]='7';
			if(ch[i] >= 't' && ch[i] <= 'v')ch[i]='8';
			if(ch[i] >= 'w' && ch[i] <= 'z')ch[i]='9';
		}
		puts(ch);
		printf("\n");
	}
} 

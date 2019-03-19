#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
    getchar();
	while(n--)
	{
		char ch[100];
		int m;
		gets(ch);
		m = strlen(ch);
		for (int i = 0; i < m; i+=2)
		{
			if(ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - 32; 
		}
		puts(ch);
		printf("\n");
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar(); 
	while (n--)
	{
		char ch[1011];
		int m, max, j, ph[123] = {0};
		scanf("%s", ch);
		m = strlen(ch);
		for (int i = 0; i < m; i++)
		ph[ch[i]]++;
		max = ph[97];
		j = 97;
		for (int i = 98; i < 123; i++)
		if (max < ph[i])
		{
		  max = ph[i];
		  j = i;
		}
		printf("%c\n", j);
	}
} 

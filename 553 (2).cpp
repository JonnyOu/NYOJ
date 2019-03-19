#include<stdio.h>
int main()
{
	char ch[100];
	int sum = 0, n;
	while (gets(ch))
	{
		for (int i = 0; ch[i] != '\0' ; i++)
		if(ch[i] == 'a') sum++;
		printf("%d\n", sum);
	  
    }
} 

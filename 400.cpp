#include <stdio.h>
#include <string.h>

int main( void )
{
	int n;
	scanf("%d", &n);
	getchar();
	while(n--)
	{
	   int sum,j = 0,k = 0,s,p;
		char str[101],ptr[101];
		scanf("%s%s", &str, &ptr);
		s = strlen(str);
		p = strlen(ptr);
	    for (int i = 0; i < s; i++)
	   	j = j + str[i] - '0';
	   	for (int i = 0; i < p; i++)
	   	k = k + ptr[i] - '0';
	    sum = j + k;
		printf("%d\n", sum);	
	}
    return 0;
} 

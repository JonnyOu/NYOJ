#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d", &a) != EOF)
	printf("%d%d%d\n", a%10, a/10%10, a/100);	
}

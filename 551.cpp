#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
	if(n >= 90) printf("A\n");
	else if(n >= 80 && n < 90) printf("B\n");
	else if(n >= 70 && n < 80) printf("C\n");
	else if(n >= 60 && n < 70) printf("D\n");
    if(n < 60) printf("E\n");
	}
}

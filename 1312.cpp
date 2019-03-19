#include<stdio.h>
int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
	int a,b,c,d;
	char e;
	scanf("%d%c%d", &a, &e, &b);
	getchar();
	scanf("%d%c%d", &c, &e, &d);
	getchar();
    int sum = 0;
	for (int i = a+1; i < c; i++)
    sum += month[i];
    if(c > a)
    {
    sum += month[a] - b;
	sum += d;	
    }
    else sum += d-b;
    printf("%d\n", sum);
	}
} 

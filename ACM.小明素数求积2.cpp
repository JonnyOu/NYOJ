#include<stdio.h>
int prime(int i);
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int sum = 1,m;
		scanf("%d", &m);
		for(int i = 2; i <= m; i++)
		if(prime(i) == 1)
		sum = sum * i % 1000000;
		printf("%d\n", sum);
	}
	return 0;
}

int prime(int i)
{   
    
	for(int j = 2; j * j <= i; j++)
	if(i % j == 0)
	return 0;
    return 1;
}

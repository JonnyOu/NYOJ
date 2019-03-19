#include<stdio.h>
int main()
{
	int N,M;
    scanf("%d",&N);
	if(N<=10&&N>=0)
	{
	for(int i=1;i<=N;i++)
	{
	scanf("%d",&M);
	if(M<=59&&M>=0)
	printf("E\n");
	if(M<=69&&M>=60)
	printf("D\n");
	if(M<=79&&M>=70)
	printf("C\n");
	if(M<=89&&M>=80)
	printf("B\n");
	if(M<=100&&M>=90)
	printf("A\n");
	}
	}
	else 
	printf("no answer");
}

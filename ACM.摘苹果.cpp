#include<stdio.h>
int main()
{   int n;
	scanf("%d",&n);
	while(n--)
	{
	int m,a[10];
	for(int i=0;i<=9;i++)
	{
	scanf("%d\t",&m);
	a[i]=m;
    }
    int b,s=0;
    scanf("%d",&b);
    for(int i=0;i<=9;i++)
    {
    	if(a[i]<=30+b)
    	s+=1;
    }
    printf("%d\n",s);
   }
}

#include<stdio.h>
int main()
{
	int a,b,m,n=1;
	scanf("%d\t%d",&a,&b);
	m=a+b;
	for(int i=1;i<=6;i++){
	printf("\n");	
	scanf("%d\t%d",&a,&b);
	if(m<a+b)
	{
	m=a+b;
	n=n+1;
	}
    }
	printf("\n%d",n);	
	
		
	
	
}

#include<stdio.h>
int main()
{
	char a[100][100];
	double s=0,n,m;
	while(scanf("%s",a)!=EOF)
	{
    	scanf("%lf%lf",&n,&m);
    	s+=n*m;
	}
    printf("%.1lf",s);
} 

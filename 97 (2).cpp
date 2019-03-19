#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{   
	    double m,x,y,z,s;
		scanf("%lf%lf%lf%lf",&m,&x,&y,&z);
		s=z*x*m/(y-x);
		printf("%.2lf\n",s);
	}
	return 0; 
} 

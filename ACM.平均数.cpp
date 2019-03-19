#include<stdio.h>
int main(void)
{
	double s=0,money[12];
	for(int i=0;i<12;i++)
	{
		scanf("%lf",&money[i]);
		s+=money[i];
	}
	s=s/12;
	printf("%.2f",s);
}
	

#include<stdio.h>
#include<math.h>
int number(int m);
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int N,m,s,M;
		scanf("%d",&m);
		N=number(m);
		M=pow(10,N-1);
		s=m%M;
	    printf("%d\n",s); 
	}
	return 0;
}


int number(int m)
{
	int c=0;
	do{
		c++;
		m/=10;
	}
	while(m!=0); 
	return c;
}



#include<stdio.h>
int weird_multiplication(int m);
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,a1,a2;
		scanf("%d%d",&a,&b);
	   a1=weird_multiplication(a);
	   a2=weird_multiplication(b);
	   printf("%d\n",a1*a2);
	}
}

int weird_multiplication(int m){
	int s=0;
	while(m){
		s += m%10;
		m /= 10;
	}
	return s;
} 

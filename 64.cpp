#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(a--)
	{
		int n,m,j,t;
		scanf("%d%d",&n,&m);
		j=2*n-m/2;
		t=m/2-n;
		if(j>=0&&t>=0&&m%2==0)
		printf("%d %d\n",j,t);
		else printf("No answer\n");

	}
}

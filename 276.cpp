#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar(); 
	while(n--)
	{
		char a,c,b;
		scanf("%c %c",&a,&b);
		if(a-b < 0)
		printf("%c>%c\n",a,b);
		else if(a == b)
		printf("%c=%c\n",a,b);
		else
		printf("%c<%c\n",a,b);
		getchar(); 
	}
	return 0;
}

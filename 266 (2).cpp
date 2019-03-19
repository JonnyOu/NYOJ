#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[40];
		gets(a);
		int m;
		m=strlen(a);
		for(int i=m;i>-1;i--)
		{
			if(a[i]>='A'&&a[i<='z'])
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}

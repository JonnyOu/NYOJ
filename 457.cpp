#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n--)
	{
	int i;
	char ch[100];
    scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		   ch[i]=ch[i]-('a'-'A');
		else if(ch[i]>='A'&&ch[i]<='Z')
		   ch[i]=ch[i]+('a'-'A');
	}	
	printf("%s\n",ch);
    }
}


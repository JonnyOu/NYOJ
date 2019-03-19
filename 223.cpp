#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar(); 
	while(n--)
	{
		
		char ch[12];
		scanf("%s",ch);
		for(int i=0;i<11;i++)
		{
			if(ch[i]=='a' || ch[i]=='b' || ch[i]=='c')ch[i]='2';
			if(ch[i]=='d' || ch[i]=='e' || ch[i]=='f')ch[i]='3';
			if(ch[i]=='g' || ch[i]=='h' || ch[i]=='i')ch[i]='4';
			if(ch[i]=='j' || ch[i]=='k' || ch[i]=='l')ch[i]='5';
			if(ch[i]=='m' || ch[i]=='n' || ch[i]=='o')ch[i]='6';
			if(ch[i]=='p' || ch[i]=='q' || ch[i]=='r' || ch[i]=='s')ch[i]='7';
			if(ch[i]=='t' || ch[i]=='u' || ch[i]=='v')ch[i]='8';
			if(ch[i]=='w' || ch[i]=='x' || ch[i]=='y' || ch[i]=='z')ch[i]='9';
		}
		puts(ch);
		printf("\n");
    }
}

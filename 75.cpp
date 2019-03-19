#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int y,i,d,s=0;
		scanf("%d %d %d",&y,&i,&d);
		if(i>2)
		{
			if(y%4==0 && y%100!=0 || y%400==0)
		    s+=1;
		}
		if(i>=1&&i<=12)
		{   
		for(int m=1;m<i;m++)
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		    s+=31;
	    	else if(m==4||m==6||m==9||m==11)
     		s+=30;
     		else
     		s+=28;
		}		
		}
		s+=d;
	    printf("%d\n",s);		
	}
} 

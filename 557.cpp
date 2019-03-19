#include<stdio.h>
int main()
{
     int a,s=0;
    if(scanf("%d",&a)!=EOF)
	 for(int i=1;i<=10;i++)
     {
	 if(a%2==1)
     s+=1;
     scanf("%d",&a); 
     }
    printf("%d",s);
    
	 
} 

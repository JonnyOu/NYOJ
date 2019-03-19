#include<stdio.h>
int main()
{
	int a;
        scanf("%d",&a);
        for(int i=1;i<=a;i++)
		{   
	int n,t=0;
		    scanf("%d",&n);
		 	for(int j=1;j<=n;j++)
		{  
		    int s=1;
			for(int k=1;k<=j;k+=2)
			s=s*k;
			t=t+s;
		}
	   	printf("%d\n",t);
        }
        
} 





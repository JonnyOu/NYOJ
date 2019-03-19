#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n),n!=0){
		int a[100]={1,2,3,4};
		for(int i=4;i<=n;i++){
			a[i]=a[i-3]+a[i-1];
		}	    
		printf("%d\n",a[n-1]);
	}
} 

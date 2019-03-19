#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n),n != 0){
		int m=0,min,a[100];
		for(int i = 0;i < n;i++)
		scanf("%d",&a[i]);
		min=a[0];
		for(int i = 0;i < n;i++){
			if(min > a[i]){
			min = a[i];
			m=i;
			} 
		}
		a[m] = a[0];
		a[0] = min;
		for(int i = 0;i < n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m); 
		for(int i=m;i>=1;i--){
		for(int j=1;j<=i;j++)
		printf("*");
		printf("\n");
		}
	printf("\n");
	}
}

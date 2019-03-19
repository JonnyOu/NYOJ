#include<stdio.h>
int main(){
	int n,s;
	while(scanf("%d",&n)!=EOF){
	if(n>0){
		s = 0;
		for(int i=1;i<=n;i++)
		s += i;
    	printf("%d\n",s);
	}
	else {
		s = 0;
     	for(int i=1;i>=n;i--)
		s += i;
		printf("%d\n",s);
	}

	}
	return 0;
}

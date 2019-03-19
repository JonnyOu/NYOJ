#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int s=1,m;
		scanf("%d",&m);
		for(int i = 0;i < m;i++){
			s = (s+1)*2;
		}
		printf("%d\n",s);
	}
	return 0;
}

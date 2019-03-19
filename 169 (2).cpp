#include<stdio.h>
#include<math.h>
const int N=1000;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int s = sqrt(N);
		int a[N+1] = {0};
		for(int i = 2;i <= s;i++){
			if(a[i] == 0)
			for(int j = i * i;j <= N;j += i)
			a[j]=1;
		}
		int m,x,i,min;
		scanf("%d",&m);
		if(m == 1||m == 2||m == 3)
		printf("2\n");
		else{
			min = fabs(m - 2);
		    for(i = 2;i <= N;i++){
			if(a[i] == 0){
				if(min >= fabs(m - i)){
					min = fabs(m - i);
			    	x = i;
				}
			}
		}
		printf("%d\n",x);
		}
}		
}




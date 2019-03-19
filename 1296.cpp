#include<stdio.h>
int main(){
	int a,b,c;
	while(scanf("%d",&a),a!=0){
		scanf("%d%d",&b,&c);
		if(a+b>c && a+c>b && b+c>a){
			printf("Great,you are genius!\n");
		}
		else
		    printf("oh,my god!\n");
	}
}

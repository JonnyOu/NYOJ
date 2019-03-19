//https://zhidao.baidu.com/question/2270647584698380428.html
//ภ๗บฆมห 
#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long a, b, c;
		scanf("%ld%ld%ld", &a, &b, &c);
		if ((a-b)%3 == 0 || (a-c)%3==0 || (b-c)%3==0) printf("YES\n"); 
		else printf("NO\n");
	}
}

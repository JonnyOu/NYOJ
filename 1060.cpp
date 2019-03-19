/*
nyoj 1060
分析:由2+ab+2a+2b = (a+2)*(b+2)-2,可知，输入的数num+2,能被3或5整除,最终为1 
*/ 

#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
		n += 2;
		while (n%3 == 0) 
			n /= 3;
		while (n%5 == 0)
			n /= 5;
		if (n == 1)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

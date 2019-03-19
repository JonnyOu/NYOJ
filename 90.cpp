/*
nyoj 90
感谢: https://www.cnblogs.com/dongsheng/archive/2013/04/06/3002625.html
*/

int f(int n, int m) { //表示将整数n划分为整数不超过m的划分 
	if (n == 1 || m == 1) return 1;  
	if (n == m) return 1+f(n,n-1);
	if (n < m) return f(n,n);
	if (n > m) return f(n-m,m)+f(n,m-1);
}


#include<stdio.h>
int main() {
	int T;
	int n;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		printf("%d\n", f(n,n));
	}
	return 0;
}

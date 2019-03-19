/*
nyoj 90
��л: https://www.cnblogs.com/dongsheng/archive/2013/04/06/3002625.html
*/

int f(int n, int m) { //��ʾ������n����Ϊ����������m�Ļ��� 
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

#include<stdio.h>
int main() {
	int n, m, num, num1 = 0, num2 = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n+m; i++) {
		scanf("%d", &num);
		if (i < n) 	num1 += num; 
		else num2 += num;
	}
	printf("%d", num1*num2);
}

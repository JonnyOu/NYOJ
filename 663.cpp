#include<stdio.h>
int main() {
	int a, b, c, sum = 0;
	char x, y;
	while (~scanf("%d%c%d%c%d", &a, &x, &b, &y, &c)) {
		if ((x == '+' && c == a+b) || (x == '-' && c == a-b) ) sum++;
	}
		
	printf("%d", sum);
} 

//
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a, b, c, sum = 0;
//	char x, y, str[4];
//	while (~scanf("%d%c%d=%s", &a, &x, &b, str)) {
//		c = atoi(str); //字符串转换为整数 
//		if ((x == '+' && c == a+b) || (x == '-' && c == a-b) ) sum++;
//	}
//		
//	printf("%d", sum);
//} 

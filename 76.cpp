#include<stdio.h>
int main() 
{
	int step[41] = {0,0,1,2};
	for (int i = 4; i <= 40; i++)
	step[i] = step[i-1] + step[i-2];//递归思想，从（i-1）级和（i-2）级台阶有对应种方法踏上i级台阶 
	int n;
	scanf("%d", &n);
	while (n--) {
		int m;
		scanf("%d", &m);
		printf("%d\n", step[m]);
	} 
} 

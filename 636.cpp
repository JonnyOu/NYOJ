//刷题日志： 
//解题思路（借鉴）：输入n个数a[0]~a[n-1],设b[0]~b[n-1]分别等于a[0]、a[0]+a[1]、~ 、a[0]+a[1]+....a[n-1]
//b[0]~b[n-1]分别 %n ,若存在0则输出YES, 否则%后的得数分别在1~n-1中，由于有n个得数
//则至少有2个或以上的得数相等，则其中2个得数对应的b[x]相减，差必然是n的倍数 
#include<stdio.h>
int main()
{
	int n,sum,tag,ch[10000];
	while (~scanf("%d", &n)) {
		sum = 0; tag = 0; 
		for (int i = 0; i < n; i++) 
		scanf("%d", &ch[i]);
		printf("YES\n");
	}
} 


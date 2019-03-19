//刷题日志：分清输入输出，当程序输出很奇怪的数据时，检查是否将输入写成了输出//29行 
#include<stdio.h>
struct number {
	int x;
	int y;
}ch[1000000];//用普通方法超时，待解决 
int main()
{
	
 	int n,m,s,j,k;
	while (~scanf("%d%d", &n,&m)) {
	ch[0].x = 0; ch[0].y = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &s);
			if (s > 0) {
			ch[i].x = ch[i-1].x + 1;	
			ch[i].y = ch[i-1].y;
			}
			else if (s == 0) {
			ch[i].x = ch[i-1].x;	
			ch[i].y = ch[i-1].y;
			}
			else {
			ch[i].x = ch[i-1].x;	
			ch[i].y = ch[i-1].y + 1;
			}
		}
		for (int i = 0; i < m; i++) {
			scanf("%d%d", &j,&k);
			printf("%d %d\n", ch[k].x-ch[j-1].x,ch[k].y-ch[j-1].y);
		}	
	}
}

//ˢ����־����������������������������ֵ�����ʱ������Ƿ�����д�������//29�� 
#include<stdio.h>
struct number {
	int x;
	int y;
}ch[1000000];//����ͨ������ʱ������� 
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

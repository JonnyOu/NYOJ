#include<stdio.h>
int main()
{
	int n,m,j,s,ch[100],ph[100],th[100];
	while (~scanf("%d%d", &n,&m)) {
		for (int i = 0; i < n; i++)
		scanf("%d", &ch[i]);
		for (int i = n-1; i > 0; i--) {//冒泡排序 
			for (int j = 0; j < i; j++) {
				if (ch[j] < ch[j+1]) {
					int temp = ch[j];
					ch[j] = ch[j+1];
					ch[j+1] = temp;
				}
			}
		}
		j = 1;
		s = 1;
		for (int i = 0; i < n; i++) {//按要求排序到另一个数组中1 1 3 4 4 6.... 
			ph[i] = j;
			if (ch[i] > ch[i+1]) {
				j += s;
				s = 1;
			}
			else s++;
		}
//		for (int i = 0; i < n; i++)
//		printf("%d ", ph[i]);
//		printf("\n");
		s = 0;
		for (int i = 0; i < m; i++)
		scanf("%d", &th[i]);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (th[i] == ph[j]) {
					s++;
				}
				if (th[i] < ph[j])//提高效率 
				break;
			}
			printf("%d\n", s); 
			s = 0;//重新赋值 
		}	
	}
} 

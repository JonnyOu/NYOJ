#include<stdio.h>
int main()
{
	int n,j,k;
	char ch[51];
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &j);
		getchar();
    	scanf("%s", ch);
		scanf("%d", &k);
		for (int i = 0; i < j; i++) {//按特定下标为起点顺序完整输出字符串 
			if (k >= j)
			k %= j;
			printf("%c", ch[k]);
			k++;
		}
		printf("\n");
	}
} 

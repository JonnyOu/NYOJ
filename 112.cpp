#include<stdio.h>
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		int ch[20] = {0,1};
		int len = 1;
		for (int i = 1; i <= y; i++) {
			int count = 0;
			for (int j = 1; j <= len; j++) {
				int s = ch[j] * x + count;
				ch[j] = s % 10;
				count = s / 10;
			}
			if(count != 0) 
			ch[++len] = count;
		}
		for (int i = len; i > 0; i--)
		printf("%d", ch[i]);
		printf("\n");
	}
}

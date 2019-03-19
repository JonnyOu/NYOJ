#include<stdio.h>
#include<string.h>
int main()
{
	int n, x, y, m, ch[101];
	scanf("%d", &n);
	while (n--) {
		memset(ch, 0 , sizeof(ch));
		scanf("%d%d", &x, &y);
		for (int i = 0; i < x; i++) {
			scanf("%d", &m);
			ch[m]++;
		}
		for (int i = 1; i <= y; i++)
		if (ch[i] != 0)
		for (int j = 1; j <= ch[i]; j++)
			printf("%d ", i);
		printf("\n");
	}
}


#include<stdio.h>
int main()
{
	int ch[10];
	while (scanf("%d", &ch[0]) != EOF) {
		int s = 5+ch[0]*10;
		for (int i = 1; i < 10; i++) {
			scanf("%d", &ch[i]);
			if (i < 5)
			s += 5 + ch[i] * 10;
			if (i > 4)
			s -= ch[i];
		}
		if (s >= 0)
		puts("No !");
		else
		printf("Yes %d\n", -s);
	}
} 

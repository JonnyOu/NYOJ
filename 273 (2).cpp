#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--) {
		char ch[1001];
		int m, s = 0;
		gets(ch);
		m = strlen(ch);
		for (int i = 0; i < m; i++) {
			if (ch[i] >= 'a' && ch[i] <= 'z') 
			s++;
		}
		s %= 26;
		if (s == 0)
		puts("z");
		else
		printf("%c\n", s+96);
	}
} 

#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		char ch[6];
		scanf("%s", ch);
		int m = strlen(ch);
		if (m == 5)
		puts("3");
		else if (ch[0]=='o'&&ch[1]=='n' || ch[0]=='o'&&ch[2]=='e' || ch[1]=='n'&&ch[2]=='e')
		puts("1");
		else 
		puts("2");
	}
}

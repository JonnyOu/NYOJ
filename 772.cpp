//給字符串数组赋值，即使没有占满数组空间，该地址上或得的串为赋值的串，不受空间冗余影响 
#include<stdio.h>
#include<string.h>
#define maxn 105
int main() {
	int T;
	scanf("%d", &T);
	getchar();
	while (T--) {
		char s[maxn], map[maxn][maxn];
		memset(map, 0, sizeof(map));//初始化数组，不只是赋值为0 
		gets(s);
		int len = strlen(s), t1 = 0, t2 = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == ' ') {t1++; t2 = 0; continue;}
			map[t1][t2] = s[i];
			t2++;
		}
		//printf("%d\n", t1);
//		for (int i = 0; i <= t1; i++) //給字符串数组赋值，即使没有占满数组空间，该地址上或得的串为赋值的串，不受空间冗余影响 
//				printf("%s %d\n", map[i], strlen(map[i]));
		for (int i = 0; i <= t1; i++) {
			if (strlen(map[i])>2 && strcmp(map[i],"and") && strcmp(map[i],"And") && strcmp(map[i],"for")
			  && strcmp(map[i],"For") && strcmp(map[i],"the") && strcmp(map[i],"The")) {
					if (map[i][0]>='a' && map[i][0]<='z') printf("%c", map[i][0]-32);
					else printf("%c", map[i][0]);		
			}
		}
		printf("\n");
	}
}

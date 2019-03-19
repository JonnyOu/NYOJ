#include<stdio.h>
#include<string.h>
#define maxn 90
int main() {
	int T;
	scanf("%d", &T);
//	getchar();
	while (T--) {
		char s[maxn];
		scanf("%s", s);
		int note = 0, sum = 0, len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (s[i] == 'O') note++;
			else note = 0;
			sum += note;
//			printf("%d", note);
//			if (i < len-1) printf("+");
		}
		printf("%d\n", sum);
	}
}

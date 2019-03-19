#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int num, sum = 0;
		char s[5];
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%s", s);
			if (!strcmp(s, "++X") || !strcmp(s, "X++")) sum++;
			else sum--;
		}
		printf("%d\n", sum);
	}
}

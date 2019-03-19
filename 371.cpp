#include<stdio.h>
#include<string.h>
#define maxn 105
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char c = 'N', s[maxn];
		scanf("%s", s);
		int x = 0, y = 0, len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (s[i] == 'L') {
				if (c == 'E') c = 'N';
				else if (c == 'S') c = 'E';
				else if (c == 'W') c = 'S';
				else c = 'W';
			}
			else if (s[i] == 'R') {
				if (c == 'E') c = 'S';
				else if (c == 'S') c = 'W';
				else if (c == 'W') c = 'N';
				else c = 'E';
			}
			else {
				if (c == 'E') x++;
				else if (c == 'S') y--;
				else if (c == 'W') x--;
				else y++;
			}
			//printf("%c\n", c);
		}
		printf("%d %d %c\n", x, y, c);
	}
}

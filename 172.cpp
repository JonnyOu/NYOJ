#include<stdio.h>
#include<string.h>
typedef struct command {
	char a[10];
	int x, y, l;
} command;

int main() {
	int map[101][101], sum;
	memset(map, 0, 40804);
	int n;
	//输入指令数 
	scanf("%d", &n);
	command t[n];
	//输入指令 
	for (int i = 0; i < n; i++) 
		scanf("%s%d%d%d", t[i].a, &t[i].x, &t[i].y, &t[i].l);
	//分3种情况 
	for (int i = 0; i <n; i++) {
		//涂黑 
		if (!strcmp(t[i].a, "BLACK")) {
			for (int j = t[i].x; j <= t[i].x+t[i].l-1 && j <= 100; j++) {
				for (int k = t[i].y; k <= t[i].y+t[i].l-1 && k <= 100; k++) {
					if (map[j][k] == 0) map[j][k] = 1;
				}
			}
		} 
		//涂白 
		else if (!strcmp(t[i].a, "WHITE")) {
			for (int j = t[i].x; j <= t[i].x+t[i].l-1 && j <= 100; j++) {
				for (int k = t[i].y; k <= t[i].y+t[i].l-1 && k <= 100; k++) {
					if (map[j][k] == 1) map[j][k] = 0;
				}
			}
		}
		//输出 
		else {
			sum = 0;
			for (int j = t[i].x; j <= t[i].x+t[i].l-1 && j <= 100; j++) {
				for (int k = t[i].y; k <= t[i].y+t[i].l-1 && k <= 100; k++) {
					if (map[j][k] == 1) sum++;
				}
			}
			printf("%d\n", sum);
		}
	} 
}

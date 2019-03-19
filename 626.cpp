#include<stdio.h>
#include<string.h>
#define maxn 100005
int main() {
	int n, m;
	while (~scanf("%d%d", &n, &m)) {
		int a[n], b[m], max = 0;
		for (int i = 0; i < n; i++) {scanf("%d", &a[i]); if (max < a[i]) max = a[i];}
		for (int i = 0; i < m; i++) {scanf("%d", &b[i]);}
		int map[max+1];
		memset(map, 0, sizeof(map));
		for (int i = 0; i < n; i++) map[a[i]]++;
		int sum = 0;
		for (int i = 0; i < m; i++) if (b[i]<=max && map[b[i]]) sum++;
		printf("%d\n", sum);	
	}
}

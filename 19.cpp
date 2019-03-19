#include<cstdio>
#include<cstring>
using namespace std;
int a[10], b[10], n, m;

void dfs(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++)
			printf("%d", a[i]);
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (b[i] == 0) {
				a[x] = i;
				b[i] = 1;
				dfs(x+1);
				b[i] = 0;
			}
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		memset(b, 0, sizeof(b));
		scanf("%d%d", &n, &m);
		dfs(0);
	}
	return 0;
}

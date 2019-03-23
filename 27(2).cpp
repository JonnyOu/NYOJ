#include <bits/stdc++.h>
using namespace std;

int rx[] = {-1,0,1,0};
int ry[] = {0,1,0,-1};
int G[105][105];
int cnt;
int n, m;
void dfs(int x, int y); //因为连接的水池看作1个水池，把当前的水池改成陆地

int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> n >> m;
		memset(G, 0, sizeof(G));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> G[i][j];
		cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (G[i][j]) {
					cnt++;
					dfs(i, j);
				}
		cout << cnt << endl;
	}
	return 0;
}

void dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= m) return;
	if (!G[x][y]) return ;
	G[x][y] = 0;
	for (int i = 0; i < 4; i++)
		dfs(x+rx[i], y+ry[i]);
}


#include <bits/stdc++.h>
using namespace std;

struct node {
	int x;
	int y;
};
typedef struct node Node;

int rx[] = {-1,0,1,0};
int ry[] = {0,1,0,-1};
int G[105][105];
int cnt;
int n, m;
void bfs(int x, int y); //因为连接的水池看作1个水池，把当前的水池改成陆地

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
					bfs(i, j);
				}
		cout << cnt << endl;
	}
	return 0;
}

void bfs(int x, int y) {
	queue<Node> q;
	Node d;
	d.x = x; d.y = y;
	q.push(d);
	while (!q.empty()) {
		Node t = q.front();
		q.pop();
		G[t.x][t.y] = 0;
		for (int i = 0; i < 4; i++) {
			int xx = t.x+rx[i], yy = t.y+ry[i];
			if (xx < 0 || yy < 0 || xx >= n || yy >= m) continue;
			if (G[xx][yy]) {
				Node k;
				k.x = xx; k.y = yy;
				q.push(k);
			}
		}
	}
}


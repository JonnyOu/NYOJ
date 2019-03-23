#include <bits/stdc++.h>
using namespace std;

int tmap[9][9] = {{1,1,1,1,1,1,1,1,1},
 {1,0,0,1,0,0,1,0,1},
 {1,0,0,1,1,0,0,0,1},
 {1,0,1,0,1,1,0,1,1},
 {1,0,0,0,0,1,0,0,1},
 {1,1,0,1,0,1,0,0,1},
 {1,1,0,1,0,1,0,0,1},
 {1,1,0,1,0,0,0,0,1},
 {1,1,1,1,1,1,1,1,1}};
 
int G[9][9];
 
int cnt;
int x1,p,x2,y2;
int xx[] = {-1,0,1,0};
int yy[] = {0,1,0,-1};
void dfs(int x, int y, int cur);
void cp();

int main() {
	int T;
	cin >> T;
	while (T--) {
		cp();
		cin >> x1 >> p >> x2 >> y2;
		cnt = 1000;
		G[x1][p] = 1;
		dfs(x1, p, 0);
		cout << cnt << endl;
	}
	return 0;
}

void dfs(int x, int y, int cur) {
	if (x == x2 && y == y2) {
		if (cnt > cur) cnt = cur;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		int t1 = x+xx[i], t2 = y+yy[i];
		if (t1 < 0 || t2 < 0 || t1 > 8 || t2 > 8 || G[t1][t2]) continue;
		G[t1][t2] = 1;
		dfs(t1, t2, cur+1);
		G[t1][t2] = 0;
	}
}

void cp() {
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			G[i][j] = tmap[i][j];
}

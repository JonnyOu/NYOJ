#include <bits/stdc++.h>
using namespace std;

int n;
int tmap[1005][1005];
int d[1005];
int rec[1005][2];
bool inside(int i, int j);
int dp(int i);

int main() {
	int T;
	cin >> T;
	while (T--) {
		memset(tmap, 0, sizeof(tmap));
		memset(rec, 0, sizeof(rec));
		memset(d, 0, sizeof(d));
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> rec[i][0] >> rec[i][1];

		for (int i = 0; i < n; i++)        //构造地图
			for (int j = i+1; j < n; j++)
				if (inside(i,j)) tmap[i][j] = 1;
				else if (inside(j,i)) tmap[j][i] = 1;

		int max_num = 0;
		for (int i = 0; i < n; i++) {     //d[i]表示从节点i出发的最长路径长度
			int t = dp(i);
			if (max_num < t) max_num = t;
		}
		cout << max_num << endl;
	}
	return 0;
}

bool inside(int i, int j) {
	if (rec[i][0]>rec[j][0] && rec[i][1]>rec[j][1] || rec[i][0]>rec[j][1] && rec[i][1]>rec[j][0])
		return true;
	return false;
}

int dp(int i) {
	int &ans = d[i];
	if (ans > 0) return ans;
	ans = 1;
	for (int j = 0; j < n; j++) {
		if (tmap[i][j]) {
			int tmp = dp(j);
			ans = ans>tmp+1?ans:tmp+1;
		}
	}
	return ans;
}

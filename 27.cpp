/*
79.
搜索
解题思路:用二维数组存储数据，遍历，遇到水池，通过递归调用，搜索该水池周围的水池赋值为0，
赋值为0的水池同样搜索其周围是否存在水池，即可把一片区域的水池只保留一个，计为1个水池 
*/

#include<cstdio>
using namespace std;
const int MaxSize = 110;

int a[MaxSize][MaxSize];
int x[4] = {0,0,-1,1}, y[4] = {-1,1,0,0}; 
int m, n, count;

void dfs(int p, int q) {
	a[p][q] = 0;
	int s, t;
	//遍历水池的四个方位
	for (int i = 0; i < 4; i++) {
		s = p + x[i];
		t = q + y[i];
		if (s >= 0 && t >= 0 && s < m && t < n && a[s][t]) 
			dfs(s, t);
	}
	return ; //如果该点为陆地，直接返回 
}

int main() {
	int T, t;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		count = 0;
		for (int i = 0; i < m; i++)	
			for (int j = 0; j < n; j++) {
				if (a[i][j]) {
					count++;
					dfs(i, j);
				}
			}
		printf("%d\n", count); 
	}
	return 0;
}



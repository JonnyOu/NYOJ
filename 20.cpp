/*
nyoj 20
�������ο�˼·http://blog.csdn.net/wangluoershixiong/article/details/47054525��:
	�������dfs����������ʽ��࣬���忴���롣���� 
*/ 
#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxSize = 100002;
vector<int> vec[maxSize];
int a[maxSize];

/*
���𰸴洢������a��
*/
void dfs(int star) {
	for (int i = 0; i < vec[star].size(); i++) {
		if (a[vec[star][i]]) continue;
		a[vec[star][i]] = star;
		dfs(vec[star][i]);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, s, c, b;
		scanf("%d%d", &n, &s);
		memset(vec, 0, sizeof(vec));
		memset(a, 0, sizeof(a));
		for (int i = 0; i < n-1; i++) {
			scanf("%d%d", &c, &b);
			vec[c].push_back(b);
			vec[b].push_back(c);
		}
		a[s] = -1;
		dfs(s);
		for (int i = 1; i <= n; i++) {
			if (i != n) printf("%d ", a[i]);
			else printf("%d\n", a[i]);
		}
	}
	return 0;
}


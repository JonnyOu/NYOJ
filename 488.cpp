#include <bits/stdc++.h>
using namespace std;

int a[25], vis[25];
int prime[55];
bool ok;
int n;
void dfs(int cur);
void is_prime();

int main() {
    is_prime();
	int cnt = 0;
	while (scanf("%d", &n) && n) {
		printf("Case %d:\n", ++cnt);
		memset(vis, 0, sizeof(vis));
		a[0] = 1;
		ok = false;
		if ((n-1)&1 || n==1)   //这个判断条件要注意，即n不为偶数或n等于1
			dfs(1);
		if (!ok) puts("No Answer");
	}
	return 0;
}

void dfs(int cur) {
	if (cur == n && !prime[a[cur-1]+a[0]]) {
		ok = true;
		for (int i = 0; i < cur; i++)
			printf("%d ", a[i]);
		printf("\n");
		return ;
	}
	for (int i = 2; i <= n; i++) {
		if (!vis[i] && !prime[i+a[cur-1]]) {
			vis[i] = 1;
			a[cur] = i;
			dfs(cur+1);
			vis[i] = 0;
		}
	}
}

//素数筛选，爱拉托逊斯筛选法
void is_prime() {
	int m = sqrt(double(50+0.5));
	for (int i = 2; i <= m; i++) {
		if (!prime[i]) {
			for (int j = i*i; j < 50; j += i)
				prime[j] = 1;
		}
	}
}

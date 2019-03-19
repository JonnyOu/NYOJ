//¶ş²æÊ÷Í¼½â 
#include<cstdio>
using namespace std;
const int N = 20;
int n, k;
int a[N];

bool dfs(int i, int sum) {
	if (i == n) return sum == k;
	if (dfs(i+1, sum)) return true;
	if (dfs(i+1, sum+a[i])) return true;
	return false;
}

int main() {
	while (~scanf("%d%d", &n, &k)) {
		for (int i = 0; i < n; i++) 
			scanf("%d", &a[i]);
		if (dfs(0, 0)) printf("YES\n");
		else printf("NO\n");
	}
}

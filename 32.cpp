#include<cstdio>
using namespace std;

int a[11], n, r;
void dfs(int n, int x) {
	if (x == r) {
		for (int i = 0; i < r; i++) 
			printf("%d", a[i]);
		printf("\n");
	}
	for (int i = n; i > 0; i--) {
		a[x] = i;
		dfs(i-1, x+1);
	}
}   

int main() {
	while (~scanf("%d%d", &n, &r)) {
		dfs(n,0);
	}
	return 0;
}

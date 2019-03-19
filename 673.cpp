/*
nyoj 673
思路1：直接调用快排函数。。。看能不能过
思路2: 身高不会超过一米，定义一个空间为100*int的数组，按顺序输出 
*/ 
#include<cstdio>
#include<cstring>
const int MaxSize = 101;

int a[MaxSize];

int main() {
	int T, n, m, t, M;
	scanf("%d", &T);
	while (T--) {
		M = 0;
		memset(a, 0, sizeof(a));
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++) {
			scanf("%d", &t);
			if (M < t) M = t;
			a[t]++;
		}
		for (int i = 1; i <= M; i++) {
			for (int j = 0; j < a[i]; j++) 
				printf("%d ", i);
		} 
		printf("\n");
	}
	return 0;
}

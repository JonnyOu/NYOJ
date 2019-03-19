/*
普通方法超时
解题思路：记录当前士兵的总杀敌数，位置相减，差值为这部分士兵的总杀敌数 
*/ 
#include<cstdio>
using namespace std;

int a[1000000];

int main() {
	int N, M, m, n, k;
	scanf("%d%d", &N, &M);
	a[0] = 0;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &k);
		a[i] = a[i-1]+k;
	}
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &m, &n);
		printf("%d\n", a[n]-a[m-1]);
	}
	return 0;
}

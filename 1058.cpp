#include<cstdio>
#include<string.h>
using namespace std;
const int M = 20;

int N, n, t, a[M], b[M];

bool fds(int i, int sum) {
	if (i == N) return sum == n;
	if (fds(i+1, sum)) {
		return true;
	}
	if (fds(i+1, sum+a[i])) {
		b[t++] = a[i];
		return true;
	}
	return false;
}

int main() {
	while (~scanf("%d%d", &N, &n)) {
		for (int i = 0; i < N; i++) scanf("%d", &a[i]);
		memset(b, 0, M*sizeof(int));
		t = 0;
		if (fds(0,0)) {
			printf("YES\n");
			for (int i = t-1; i >= 0; i--)
				printf("%d ", b[i]);
			printf("\n");
		}
		else printf("NO\n");
	}
	return 0;
}

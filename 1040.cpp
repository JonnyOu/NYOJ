#include<cstdio>
using namespace std;

int main() {
	int N, K, cnt, sum = 0;
	scanf("%d%d", &N, &K);
	int a[N];
	for (int i = 0; i < N; i++) 
		scanf("%d", &a[i]);
	for (int i = 0; i < N; i++) {
		cnt = 0;
		for (int j = i+1; j < N; j++) {
			if (cnt == 0) {
				for (int k = i; k <= j; k++) cnt += a[k];
			}
			else cnt += a[j];
			if (cnt % K == 0) sum++;
		}
	}
	printf("%d\n", sum);
}

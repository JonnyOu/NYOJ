#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N,D,sum,note;
		scanf("%d%d", &N, &D);
		sum = 1; note = 0;
		int a[N];
		for (int i = 0; i < N; i++) scanf("%d", &a[i]);
		for (int i = 1; i < N; i++) {
			if (a[i] >= a[note] + D) {
				sum++;
				note = i;
			}
		}
		printf("%d\n", sum);
	}
}

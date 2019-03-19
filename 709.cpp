#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int L, N, sum = 0, note = 0, t;
		scanf("%d%d", &L, &N);
		int a[N];
		for (int i = 0; i < N; i++) scanf("%d", &a[i]);
		for (int i = 0; i < N-L+1; i++) {
			t = 0;
			for (int j = i; j < i+L; j++) t += a[j];
			if (t >= 0 && sum < t) {
				sum = t;
				note = i+1;
			}
		}
		printf("%d\n", note);
	}
}

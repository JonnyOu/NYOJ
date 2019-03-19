#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, max, sum;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		max = a[0], sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if (max < sum) max = sum;
			else if (sum < 0) sum = 0;
		}
		printf("%d\n", max);
	}
	return 0;
}

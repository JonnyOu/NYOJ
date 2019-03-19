#include<cstdio>
using namespace std;

int main() {
	int n, m, sum, t;
	while (~scanf("%d%d", &n, &m)) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &t);
			sum += t;
		}
		printf("%d\n", sum/m+1);
	}
}

#include<cstdio>
using namespace std;

int main() {
	int n, sum, k;
	while (scanf("%d", &n), n != 0) {
		sum = 0;	k = 0;
		for (;;) {
			sum += k;
			if ((sum - n) % 2 == 0 && (sum - n) >= 0) break;
			k++;
		}
		printf("%d\n", k);
	}
	return 0;
}

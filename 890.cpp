#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int N, M;
		scanf("%d%d", &M, &N);
		if (M < pow(2, N)) printf("Yes\n");
		else printf("No\n");
	}
}

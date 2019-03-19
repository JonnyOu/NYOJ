#include<cstdio>
using namespace std;

int main() {
	int N, M, x, y, Dong, Wang;
	scanf("%d%d", &N, &M);
	int a[N][2];
	for (int i = 0; i < N; i++) 
		scanf("%d%d", &a[i][0], &a[i][1]);
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &x, &y);
		Wang = 0; Dong = 0;
		for (int i = 0; i < N; i++) {
			if ((a[i][0] > x && a[i][1] > y) || (a[i][0] < x && a[i][1] < y))
				Wang++;
			else Dong++; 
		}
		printf("%d\n", Wang-Dong);
	}
	return 0;
}

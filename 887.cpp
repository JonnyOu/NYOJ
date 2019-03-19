#include<stdio.h>
void sort(int *a, int N);
int main() {
	int L, N;
	while (~scanf("%d%d", &L, &N)) {
		int a[N], sum = 0, count;
		for (int i = 0; i < N; i++) 
			scanf("%d", &a[i]);
		sort(a, N);
		count = 0;
		for (int i = N-1; i >= 0; i--) {
			sum += a[i];
			count++;
			if (sum >= L) {
				printf("%d\n", count);
				break;
			}
		}
		if (sum < L) 
			printf("impossible\n");
	}
} 

void sort(int *a, int N) {
	for (int i = 0; i < N-1; i++) 
		for (int j = i+1; j < N; j++) 
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

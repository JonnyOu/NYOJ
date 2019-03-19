#include<stdio.h>
#define N 10
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a[N], old, count = 0;
		for (int i = 0; i < N; i++) 
			scanf("%d", &a[i]);
		scanf("%d", &old);
		for (int i = 0; i < N; i++) 
			if (a[i] <= old+30) 
				count++;
		printf("%d\n", count);
	}
}

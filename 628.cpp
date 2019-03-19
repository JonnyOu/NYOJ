#include<stdio.h>
typedef struct {
	int num;
	int sum;
} Node;
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, flag;
		scanf("%d", &n);
		Node t[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &t[i].num);
			flag = 0;
			for (int j = 0; j < i; j++) {
				if (t[i].num == t[j].num) {
					t[j].sum++;
					t[i].sum = 0;
					flag = 1;
					break;
				}
			}
			if (!flag) t[i].sum = 1;
		}
		for (int i = 0; i < n; i++) 
			if (t[i].sum) 
				printf("%d %d ", t[i].sum, t[i].num);
		printf("\n");
	}
}

/**
9
10 2 3 4 8 4 1 3 4 9 1
10 2 3 4 8 4 1 2 3 4 8
*/

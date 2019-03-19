#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int num, sum = 0, flag;
		scanf("%d", &num);
		int a[num];
		for (int i = 0; i < num; i++)
			scanf("%d", &a[i]);
		for (int i = 1; i < num; i++) {
			flag = 0;
			for (int j = 0; j < i; j++) {
				if (a[i] < a[j]) {
					flag = 1;
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			if (flag == 1) {
				sum++;
				continue;
			}
			for (int j = i+1; j < num; j++) {
				if (a[i] > a[j]) {
					flag = 1;
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			if (flag == 1) sum++;
		}
		printf("%d\n", sum);
	}
}

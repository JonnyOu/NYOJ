#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int num, sum = 0;
		scanf("%d", &num);
		for (int i = 1; i <= num; i++) 
			for (int j = 1; j <= i; j++)
				sum += j;
		printf("%d\n", sum); 
	}
}

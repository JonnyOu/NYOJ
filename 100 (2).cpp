#include<stdio.h>
int main() {
	int n,num,sum; 
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &num);
		while (num != 0) {
			if(num % 2 == 1) sum++;
			num /= 2;
		}
		if (num == 1) sum++;
		printf("%d", sum);
	}
}

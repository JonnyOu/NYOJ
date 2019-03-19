#include<stdio.h>
#include<string.h>

int map[1000001];
//判0 
int pan_zero(int n) {
	if (n == 0) return 1;
	while (n) {
		//不吉利的数字，返回1 
		if (n%10 == 0) return 1;
		n /= 10;
	}
	return 0;
}
//算数 
void Pan_Zero(int *map) {
	int sum = 0;
	for (int i = 1; i <= 1000000; i++) {
		if (!pan_zero(i)) sum++;
		map[i] = sum;
	}
}
int main() {
	int n;
	Pan_Zero(map);
	while (~scanf("%d", &n)) {
		if (pan_zero(n)) printf("Unlucky\n");
		else printf("%d\n", map[n]);	
	}
}

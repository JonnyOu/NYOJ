#include<stdio.h>
#include<string.h>
int Yinshu(int n, int m);
int main() {
	long n,U = 0;
	scanf("%d", &n);
	getchar();
	char arr[n];
	gets(arr);
	
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'S') {
			printf("Bingo");
			return 0;
		}
		if (arr[i] == 'U') ++U;
	}
	
	if ((float)U/(float)n >= 0.003 && (float)U/(float)n <= 0.5) {
		printf("%d/%d", U/Yinshu(U, n), n/Yinshu(U, n));
	}
	else printf("Fail");
}

int Yinshu(int n, int m) {
	while (n % m != 0) {
		int temp = n;
		n = m;
		m = temp % m;
	}
	return m;
}

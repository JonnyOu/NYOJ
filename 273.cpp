#include<stdio.h>
#include<string.h>
int main() {
	int n, sum;
	scanf("%d", &n);
	getchar();
	while (n--) {
		sum = 0;
		char arr[201];
		gets(arr);
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] >= 'a' && arr[i] <= 'z') 
				sum++;
		}
		sum %= 26;
		if (sum == 0) printf("z\n");
		else printf("%c\n", sum+96);
	}
}

#include<stdio.h>
int main() {
	int n;
	char str[21];
	scanf("%d", &n);
	getchar();
	
	while (n--) {
		gets(str);
		puts(str);
	}
}

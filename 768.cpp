#include<stdio.h>
#include<string.h>
int main() {
	char str[51];
	int n;
	while (~scanf("%s%d", str, &n)) {
		getchar();
		for (int i = 0; i < strlen(str); i++) {
			n %= 26;
			if (n <= str[i]-'A') printf("%c", str[i]-n);
			else printf("%c", 26-n+str[i]);
		}
		printf("\n");
	}
} 

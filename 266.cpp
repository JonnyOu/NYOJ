#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char str[81];
	scanf("%d", &n);
	getchar();
	
	while (n--) {
		gets(str);
		for (int i = strlen(str)-1; i >= 0; i--) {
			if (str[i] >= 'a' && str[i] <= 'z')
				printf("%c", str[i]);
		}
		printf("\n");
	}
}

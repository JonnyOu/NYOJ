#include<stdio.h>
#include<string.h>
#define N 100
int main() {
	char str[N]; 
	int n, note;
	while (scanf("%s%d", str, &n) != EOF) {
		note = strlen(str)-n%strlen(str);//œÚ”““∆∂Ø 
		for (int i = note; i < strlen(str); i++) printf("%c", str[i]);
		for (int i = 0; i < note; i++) printf("%c", str[i]);
		printf("\n");
	}
} 

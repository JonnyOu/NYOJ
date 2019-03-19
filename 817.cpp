#include<stdio.h>
int main() {
	int n;
	char str[101], ptr[101];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		gets(str);
		ptr[i] = str[0];
	}	
	puts(ptr);
} 

 


#include<stdio.h>
#include<string.h>
#define MAX 1010

//求最大公约数 
//int gcd(int a, int b);

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char a[MAX];
		int length, flag;
		scanf("%s", a);
		length = strlen(a);
		if (length == 1 && a[length-1] == '1') {
			printf("1\n");
			continue;
		}
		if (a[length-1] > '0') {
			for (int i = 0; i < length-1; i++) 
				printf("%c", a[i]);
			printf("%c\n", a[length-1]-1);
		}
		else {
			flag = length-2;
			for (;;) {
				if (a[flag] != '0') break;
				flag--;
			}
			for (int i = 0; i < flag; i++)
				printf("%c", a[i]);
			if (flag != 0)
				printf("%c", a[flag]-1);
			for (int i = 0; i < length-flag-1; i++)
				printf("9");
			printf("\n");
		}
	}
} 

#include<stdio.h>
#include<string.h>
#define N 1005

void equality(char *a, char *b);

int main() {
	char a[N], b[N];
	while (scanf("%s%s", a, b), a[0] != '0' && b[0] != '0') {
		if (a[0] == '-' && b[0] != '-') printf("a<b\n");
		else if (a[0] != '-' && b[0] == '-') printf("a>b\n");
		else if (a[0] == '-' && b[0] == '-') equality(b,a);
		else equality(a,b);

	}
}

void equality(char *a, char *b) {
	int note;
		if (strlen(a) > strlen(b)) printf("a>b\n");
		else if (strlen(a) < strlen(b)) printf("a<b\n"); 
		else {
			note = 0;
			for (int i = 0; i < strlen(a); i++) {
				if (a[i] > b[i]) {
					printf("a>b\n");
					note = 1;
					break;
				}
				else if (a[i] < b[i]) {
					printf("a<b\n");
					note = 1;
					break;
				}
			}
			if (note == 0) printf("a==b\n");
		}	
}

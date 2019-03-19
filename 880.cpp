#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, note, t;
		scanf("%d", &m);
		t = 2*m+1;
		for (int i = 1; i <= t; i++) {
			note = 64;
			int a = abs(m+1-i), b = t-2*abs(m+1-i);
			for (int j = 1; j <= a; j++) 
				printf(" ");
			for (int j = 1; j <= b; j++) {
				if (j <= b/2+1) {
					printf("%c", note+j);
				}
				else {
					printf("%c", note+2*(b/2+1)-j);
				}
			}
			for (int j = 1; j <= a; j++) 
				printf(" ");
			printf("\n");
		}
	}
}

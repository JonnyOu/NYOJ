#include<stdio.h>
#include<string.h>
#define maxn 8
#define maxm 33
//2ת10
void R10(char *s) {
	int sum;
	for (int i = 0; i < 4; i++) { 
		sum = 0;
		for (int j = 0; j < 8; j++) 
			sum = sum*2+(s[i*8+j]-'0'); 
		if (i == 3) printf("%d\n", sum);
		else printf("%d.", sum);
	}
} 

//10ת2
void R2(char *s) {
	int sum, j = 0, len = strlen(s);
	for (int i = 0; i < 4; i++) {
		sum = 0; 
		for (;;) {
			if (s[j] == '.' || j == len) break;
			sum = sum*10+(s[j]-'0');
			j++;
		}
		j++;
		//printf("%d\n", sum);
		int n = 0, a[maxn] = {0,0,0,0,0,0,0,0};
		while (sum != 0) {
			a[n] = sum%2;
			sum /= 2;
			n++;
		}
		for (int k = maxn-1; k >= 0; k--)
			printf("%d", a[k]);
			//printf("\n");
	}
	printf("\n");
} 
int main() {
	char s[32];
	while (~scanf("%s", s)) {
		if (strlen(s) == 32) R10(s);
		else R2(s);
	}
}

/**
64.64.64.64
99.99.99.99
111.111.111.111
255.255.255.255
64.99.111.255
*/

#include<stdio.h>
#include<string.h>
#define maxn 205
int r(char *s, int p, int len) {
	int k;
	if (len%p != 0) return 0;
	k = len/p;
	for (int i = 0; i < p; i++)
		for (int j = 1; j < k; j++) 
			if (s[i] != s[j*p+i]) 
				return 0;		
	return 1;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char s[maxn], c[maxn];
		scanf("%s", s);
		int len = strlen(s), lenc = len-2, flag = 0;
		for (int i = 0; i < lenc; i++)
			c[i] = s[i+2];
	//	printf("%s\n", c);
		for (int i = 1; i < lenc/2+1; i++)
			if (c[0] == c[i] && r(c, i, lenc)) {
				printf("%d ", i);
				for (int j = 0; j < i; j++) 
					printf("%c", c[j]);
				printf(" %d\n", lenc/i);
				flag = 1;
				break;
			}
	 	if (flag == 0) {
	 		printf("%d ", lenc);
			for (int j = 0; j < lenc; j++) 
				printf("%c", c[j]);
			printf(" 1\n");
	 	} 	
	}
}

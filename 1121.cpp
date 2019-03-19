#include<stdio.h>
#include<string.h> 
#define maxn 210
//ÅĞ¶Ï×Ö·û´®ÊÇ·ñÏàµÈ 
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
	char s[maxn];
	while (~scanf("%s", s)) {
	int i, len = strlen(s);
		for (i = 1; i <= len/2+1; i++) {
			if (s[i] == s[0] && r(s, i, len)) {
				printf("%d\n", i);
				break;
			}
		}
	if (i == len/2+2) printf("%d\n", len);
	}
}

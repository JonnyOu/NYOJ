#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 105

//ÅĞ¶Ï×Ö·û´®ÊÇ·ñÏàÍ¬ 
int r(char *s, int len) {
	for (int i = 0; i < len/2; i++) 
		if (s[i] != s[len-i-1]) 
			return 0;
	return 1;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char s[maxn];
		scanf("%s", s);
		int len = strlen(s);
		for (;;) {
			//printf("%d\n", len);
			if (len%2 == 1 || !r(s, len)) break;
			len /= 2;
		}
		printf("%d\n", len);
	}
}

/*
nyoj 165
*/ 
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int m, sum = 0;
		char a[6][10];
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%s", a[i]);
		}
		char ch[10001], c;
		int k = 0;
		while (scanf("%c", &c) && c != '@') {
			if ((c>='0'&&c<='9') || (c>='a'&&c<='z') || (c=='_'))
				ch[k++] = c;
			else {
				for (int i = 0; i < m; i++) {
					if (strcmp(ch, a[i]) == 0) {
						sum++;
						break;
					}
				}
				memset(ch, 0, sizeof(ch));
				k = 0;
			} 
		}
		printf("%d\n", sum);
	}	
	return 0;
}

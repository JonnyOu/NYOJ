#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 1000
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char s[maxn], a[maxn][maxn];
		scanf("%s", s);
		memset(a, 0, sizeof(a));
		int len = strlen(s), note = 0, j = 0;
//		printf("%d\n", len);
		for (int i = 0; i < len; i++) {
			if (s[i] != '0') {
				a[note][j] = s[i]; j++;
			}
			else if (j != 0){
				note++;
				j = 0;
			}
		}
		if (s[len-1] != '0') note++;
//		printf("%d\n", note);
//		for (int i = 0; i < note; i++)
//			printf("%s %d\n", a[i], strlen(a[i]));
		if (note == 0) printf("0\n");
		else {
			int b[note];
			memset(b, 0, sizeof(b));
			for (int i = 0; i < note; i++) 
				for (int j = 0; j < strlen(a[i]); j++)
					b[i] = b[i]*10+(a[i][j]-'0');
			sort(b, b+note);
			for (int i = 0; i < note; i++)
				printf("%d ", b[i]);
			printf("\n");
		}
	}
}

/*
5
000112130002111100154510005321300001220
112310002313210003213
0000000
111111
0011001100
00110011
*/

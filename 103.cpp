#include<stdio.h>
#include<string.h>
const int maxn = 1005;
//加法函数
void J(char *a, char *b) {
	int j = strlen(a), k = strlen(b), s, g = 0;
	for (;;) {
		j--; k--;
		if (k < 0) break;
		s = (a[j]-'0'+b[k]-'0')+g;
		a[j] = (s%10)+'0';
		g = s/10; 
	}
	if (g) {//考虑数字为9的情况 
		for (;;) {
			if (a[j]!='9' || j<0) break;
			a[j] = '0';	j--;
		}
		if (j < 0)	printf("1%s\n", a);
		else {a[j] += 1;	printf("%s\n", a);}
	}
	else printf("%s\n", a);
} 
int main() {
	int T, t = 1;
 	scanf("%d", &T);
 	while (T--) {
 		char a[maxn], b[maxn];
 		scanf("%s%s", a, b);
 		printf("Case %d:\n%s + %s = ", t++, a, b);
 		if (strlen(a) > strlen(b)) J(a,b);
 		else J(b,a);
	}
} 

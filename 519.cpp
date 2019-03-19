#include<stdio.h>
#include<string.h>
#define maxn 105
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char s[maxn];
		scanf("%s", s);
		int len = strlen(s), a[6], note;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < 6; i++) {
			note = i;
			for (;;) {
				if (note >= len) break;
				a[i] += s[note];
				note += 6;
			}
		}
		int sum, t;
		for (int i = 0; i < 6; i++) {
			sum = 0;
		//	printf("\n%d\n", a[i]);
			while (a[i] != 0) {sum += a[i]%10; a[i] /= 10;}
		//	printf("%d\n", sum);
			t = sum;
			while (t > 9) {
				sum = t; t = 0;
				while (sum != 0) {t += sum%10; sum /= 10;} 
			}
			printf("%d", t);
		}
		printf("\n");
	}
}

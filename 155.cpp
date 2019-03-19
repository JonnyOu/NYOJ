#include<stdio.h>
#include<string.h>
const int maxn = 200;

//处理小数点
int C(char *s) {
	int sum = 0, len = strlen(s);
	//printf("%d\n", len);
	for (int i = 0; i < len; i++) 
		if (s[i] != '.') 
			sum = sum*10+(s[i]-'0');
	return sum;
}

int main() {
	char s[10];
	while (~scanf("%s", s)) {
		int a[maxn] = {1}, n, num, len = 1;
		scanf("%d", &n);
		num = C(s);
		//printf("%d\n", num);
		for (int i = 0; i < n; i++) {
			int t, k = 0;
			for (int j = 0; j < len; j++) {
				t = a[j]*num+k;
				a[j] = t%10;
				k = t/10;
			}
			while (k) {
				a[len++] = k%10;
				k /= 10;
			}
		}
//		for (int i = 0; i < len; i++)
//			printf("%d", a[i]);
//		printf("\n");
//		printf("%d\n", strlen(s));
		int note = 0, k = len-1, note2, flag = 0;
		for (int i = strlen(s)-1; i > 0; i--)
			if (s[i] == '.') {flag = 1; break;}
			else note++;
		if (flag == 0) note = 0;//不存在小数点，重新赋值 
		note = note*n;//小数点个数 
		for (int i = 0; i < len; i++)
			if (a[i] != 0) {note2 = i; break;}
		if (note == 0) note2 = 0; //如果存在小数点，才需要去掉小数点后面的0 
	//	printf("note = %d  note2 = %d\n", note, note2);
		if (len > note) k = len-1; 
		else k = note;
		for (;;) {
			if (k < note2) break;
			if (k >= len && k < note) printf("0");
			else if (k < len)printf("%d", a[k]);
			if (k == note && note) printf(".");
			k--;
		}
		printf("\n");
	//	printf("%d %d %d\n", note, note2, k);
	}
	return 0;
}




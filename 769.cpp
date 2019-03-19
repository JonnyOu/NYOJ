#include<stdio.h>
#include<string.h>
int main() {
	char str[51];
	int k, note;
	while (~scanf("%s", str)) {//空格可控制字符串输入结束 
		scanf("%d", &k);
		for (int i = 0; i < strlen(str); i++) {
			note = str[i]-'A';
			while (1) {
				if (note % k == 0) break;
				note += 26;
			}	 
//			printf("%d\n", note);
			printf("%c", note/k+'A');
		}
		printf("\n");
	}
}

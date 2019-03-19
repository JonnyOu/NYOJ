#include<stdio.h>
#include<string.h>
typedef struct Str {
	char s[30];
	int num;
} Str;
int main() {
	int n, count = 1;
	while (scanf("%d", &n), n != 0) {
		Str a[n];
		for (int i = 0; i < n; i++) {
			scanf("%s", a[i].s);
			a[i].num = strlen(a[i].s);
		}
		//×Ö·û´®³¤¶ÈÅÅÐò 
		for (int i = 0; i < n-1; i++) {
			for (int j = 0; j < n-1-i; j++) {
				if (a[j].num > a[j+1].num) {
					Str temp;
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
//		for (int i = 0; i < n; i++) 
//			printf("%s\n", a[i].s); 
		printf("SET %d\n", count);
		count++;
		for (int i = 0; i < n; i+=2) 
			printf("%s\n", a[i].s);
		if (n % 2 == 0) {
			for (int i = n-1; i > 0; i-=2) 
				printf("%s\n", a[i].s);	
		}
		else {
			for (int i = n-2; i > 0; i-=2) 
				printf("%s\n", a[i].s);
		}
	}
}

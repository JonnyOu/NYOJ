#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	getchar();
	
	while (n--) {
		char s, c; int m;
		scanf("%c%c%d", &s, &c, &m);
		getchar();
		if (s >= 'A' && s <= 'Z') 
			printf("%d\n", m+(s-'A'+1));
		else 
			printf("%d\n", m+('a'-s-1));
	}
}

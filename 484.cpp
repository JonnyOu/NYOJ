#include<stdio.h>
#include<string.h>
const char *c[12] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII"};
int main() {
	char s[5];
	int sum = 1;
	while (~scanf("%s", s)) {
		printf("Case %d: ", sum++);
		for (int i = 0; i < 12; i++) 
			if (!strcmp(s, c[i])) printf("%d\n", i+1);
		
	} 	
}

#include<stdio.h>
#include<string.h>
int main() {
	char key[10000];
	while (~scanf("%s", key)) {
		getchar();
		char sc[10000];
		int count = 0, note;
		scanf("%[^\n]", sc);
		for (int i = 0; i < strlen(sc); i++) {
			if (count == strlen(key)) {
				count = 0;
			}
			note = sc[i] + key[count] - 48;
			if (note < 123) {
				printf("%c", note);
			}
			else {
				printf("%c", note%123+32);
			}
			count++;
		}
		printf("\n");
	}
}

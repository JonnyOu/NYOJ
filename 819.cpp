#include<stdio.h>
#include<string.h> 
int main() {
	char str[101];
	int note, note2;
	
	while (~scanf("%s", &str)) {
		note = 0;
		for (int i = 0; i < strlen(str); i++) 
			if (str[i] == 'c')
				++note;
		if (note == 0) printf("%d\n", strlen(str)-1);
		else if (note % 2 != 0) printf("0\n");
		else {
			note2 = 0;
			note /= 2;
			for (int i = 0; i < strlen(str); i++) {
				if (str[i] == 'c') ++note2;
				if (note2 == note) {
					note2 = i;
					break;
				}
			}
			note = 1;
			for (int i = note2+1; str[i] != 'c'; i++) ++note;
			printf("%d\n", note);
		}
	}
	
	
}

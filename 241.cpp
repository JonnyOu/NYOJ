#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char str[1011];
		int num, min, note, arr[26] = {0};
		scanf("%s", str);
		num = strlen(str);
		for (int i = 0; i < num; i++) {
			arr[str[i] - 97]++;
		}
		min = arr[0];
		note = 0;
		for (int i = 1; i < 26; i++) {
			if (min < arr[i]) {
				min = arr[i]; 
				note = i;
			}
		}
		printf("%c\n", note + 97);
	}
}

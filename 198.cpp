#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char arr[11];
	
	scanf("%d", &n);
	getchar();
	
	while (n--) {
		gets(arr);
		for (int i = strlen(arr)-1; i >= 0; i--) {
			if(arr[i] == '0' || arr[i] == '1') printf("O");
			else if (arr[i] == '4' || arr[i] == '5') printf("F");
			else if (arr[i] == '6' || arr[i] == '7') printf("S");
			else if (arr[i] == '8') printf("E");
			else if (arr[i] == '9') printf("N");
			else printf("T");
		}
		printf("\n");
	}
}

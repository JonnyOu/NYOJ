#include<stdio.h>
#include<string.h>
int main() {
	char arr[1011];
	while (gets(arr)) {
		int num = strlen(arr);
		int sum = 0;
		for (int i = 0; i < num-2; i++) {
			if (arr[i] == 'y' && arr[i+1] == 'o' && arr[i+2] == 'u') {
				arr[i] = 'w'; arr[i+1] = 'e';
				for (int j = i+2; j < num-sum; j++) {
					arr[j] = arr[j+1]; 
				}	
				sum++;
			}
		}
		for (int i = 0; i < num-sum; i++) 
			printf("%c", arr[i]);
			printf("\n");
	}
} 

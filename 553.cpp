#include<stdio.h>
#include<string.h>
int main(void) {
	char arr[100];
	int count;
	while (gets(arr)) {
		count = 0;
		for (int i = 0; i < strlen(arr); i++)
		    if (arr[i] == 'a')
		 	    count++;
	    printf("%d\n", count);
	}
}

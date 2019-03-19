#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, sum = 0, note = 0, num;
		char arr[15];
		scanf("%d", &m);
		getchar();
		for (int i = 0; i < m; i++) {
			gets(arr);
			if (!strcmp(arr, "IN")) ++note;
			if (!strcmp(arr, "OUT")) --note;
			if (arr[0] == 'S') {
				num = 0;
				for (int i = 5; i < strlen(arr); i++) 
					num = num*10+(arr[i]-'0');
				sum += num*60/pow(20,note);	
			}
		} 
		printf("%d\n", sum);	
	}
}

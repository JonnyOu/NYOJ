//最大值和最小值 
#include<stdio.h>
#include<string.h>
int main(void) {
	int n, m, temp;
	scanf("%d", &n);
	while (n--) {
		char arr[101];
		scanf("%s", arr);
		m = strlen(arr);//获取字字符串长度 
		if (m == 1 && arr[0] == '0') {
			printf("0 0\n");//考虑输入0的情况 
			continue;
		}
		for (int i = 0; i < m - 1; i++) 
		for (int j = i; j < m; j++) 
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		for (int i = 0; i < m; i++) printf("%c", arr[i]);
			printf(" ");
		for (int i = 0; i < m; i++) 
			if (arr[m - 1 - i] != '0')
				printf("%c", arr[m - 1 - i]);
		printf("\n");
	}
}

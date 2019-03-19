#include<stdio.h>
#include<string.h>//memset头文件 
int main(void) {
	int n , k;
	scanf("%d%d", &n, &k);
	int arr[n+1];
	memset(arr,0,sizeof(int)*(n+1));//将数组arr全部赋值为0
	for (int i = 1; i <= k; i++) {
		for (int j = i; j < n+1; j += i) {
			if (arr[j] == 1) arr[j] = 0;
			else  arr[j] = 1;
		}
	}
	for (int i = 1; i < n+1; i++) 
		if (arr[i] == 1)
			printf("%d ", i);
	return 0;
} 

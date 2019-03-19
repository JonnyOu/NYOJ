#include<stdio.h>
int main() {
	int n, m, sum = 0;
	scanf("%d", &n);
	int arr[1001] = {0};
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		++arr[m];
	}
	
	for (int i = 1; i <= 1000; i++) 	
		if (arr[i] != 0)
			++sum;
	printf("%d\n", sum);
		
	for (int i = 1; i <= 1000; i++) {
		if (arr[i] != 0) 
			printf("%d ", i);
	}
} 

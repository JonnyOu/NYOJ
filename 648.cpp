#include<stdio.h>
#define MAX 100001
int num_1(int n);
int arr[MAX];
int main() {
	int n;
	arr[1] = 1;
	for (int i = 2; i <= MAX; i++) 
		arr[i] = num_1(i) + arr[i-1];
		
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", arr[n]);
	}
} 


int num_1(int n) {
	int count = 0;
	while (n != 0) {
		if (n%10 == 1) ++count;
			n /= 10; 
	}
	return count;
}




#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m;
		scanf("%d", &m);
		int arr[2*m];
		for (int i = 0; i < 2*m; i++) {
			scanf("%d", &arr[i]);
		}
		sort(arr,arr+2*m);
		printf("%d ", arr[0]);
		for (int i = 1; i < 2*m; i++) {//��С�������е����飬������ǰһλ�������ֵ 
			if (arr[i] != arr[i-1])
				printf("%d ", arr[i]);
		}
		printf("\n");
	}
} 

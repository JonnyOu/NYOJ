#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		int a[n], num, time, count1 = 0, count = 1, max;
		for (int i = 0; i < n; i++) 
			scanf("%d", &a[i]);
		scanf("%d%d", &num, &time);
		sort(a, a+n);
		
//		for (int i = 0; i < n; i++) 
//			printf("%d ", a[i]);
//		printf("\n");
		
		for (int i = n-1; i >= 0; i--) {
			if (count1 == num) {
				count1 = 0;
				count++;
			}
			a[i] += time*count;
			count1++;
		}
		
//		for (int i = 0; i < n; i++) 
//			printf("%d ", a[i]);
//		printf("\n");
		
		max = a[0];
		for (int i = 1; i < n; i++) 
			if (max < a[i]) 
				max = a[i];
		printf("%d\n", max);
	}
}

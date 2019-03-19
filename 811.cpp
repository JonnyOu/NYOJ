#include<stdio.h>
int main() {
	int n;
	while (~scanf("%d", &n)) {
	int a[n], b[n/3], m = 0, max;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i+=3) {
		b[m] = a[i];
		if (i % 2 == 0) {
			if (a[i+1] > b[m]) b[m] = a[i+1];
			if (a[i+2] > b[m]) b[m] = a[i+2];
		}
		else {
			if (a[i+1] < b[m]) b[m] = a[i+1];
			if (a[i+2] < b[m]) b[m] = a[i+2];
		}		
		m++;
	}
	max = b[0];
	for (int i = 0; i < n/3; i++) 
		if (max < b[i]) max = b[i];
	printf("%d\n", max);
	}
}

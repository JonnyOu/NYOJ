#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int N;
		scanf("%d", &N);
		double a[2*N], b[2*N];
		int count;
		memset(b, 0.0, sizeof(b));
		for (int i = 0; i < 2*N; i++)
			scanf("%lf", &a[i]);
		count = 0;
		for (int i = 0; i < 2*N; i++) {
			if (a[i] - (int)a[i] != 0) {
				b[count] = a[i]-(int)a[i];
				count++;
			}
		}
		sort(b, b+count);
		for (int i = 0; i < count; i++)
			printf("%lf ", b[i]);		
	}
}

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, k;
		scanf("%d", &n);
		double a[n], sum = 0.0;
		for (int i = 0; i < n; i++) scanf("%lf", &a[i]);
		sort(a, a+n);
		k = n-1;
		for (;;) {
			if (sum >= 20 || a[k] <= 1) break;
			sum += 2*(sqrt(a[k]*a[k] - 1));
			k--;
		}
		if (sum >= 20) printf("%d\n", n-k-1);
	}
	return 0;
} 

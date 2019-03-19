//基本思路:先按从下到大排列，每合并一次，排序一次
/*
1.调用sort会超时，改用插入
2.数组用long long
3.输入一种果子时，直接输出 
*/
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m, k;
		long long a[15000], sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
		if (n == 1) {
			printf("%lld\n", a[0]);
			continue;
		}
		sort(a, a+n);
		for (int i = 0; i < n-1; i++) {
			sum += (a[i] + a[i+1]);
			m = a[i] + a[i+1];
			k = i+2;
			for (;;) {
				if (a[k] >= m || k == n) break;
				k++;
			}
			for (int j = i+1; j < k-1; j++) a[j] = a[j+1];
			a[k-1] = m;
		}
		printf("%lld\n", sum);
	}
	return 0;
} 

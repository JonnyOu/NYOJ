//����˼·:�Ȱ����µ������У�ÿ�ϲ�һ�Σ�����һ��
/*
1.����sort�ᳬʱ�����ò���
2.������long long
3.����һ�ֹ���ʱ��ֱ����� 
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

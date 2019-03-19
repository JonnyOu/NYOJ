/*
214
如出一辙的动态规划。。。
*/

#include<cstdio>
#include<string>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n)) {
		int a[n], b[n], x;
		bool flag;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			b[i] = 0;
		}
		b[0] = 1;
		for (int i = 1; i < n; i++) {
			x = 0;
			flag = false;
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i] && b[j] >= b[x]) {
					x = j;
					flag = true;
				}
			}
			if (flag == true) b[i] = b[x] + 1;
			else b[i] = 1;
		}
		x = b[0];
		for (int i = 0; i < n; i++)
			if (b[i] > x) x = b[i];
		printf("%d\n", x);
	}
	return 0;
} 

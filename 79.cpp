/*
79.
动态规划：
最长递减子序列
http://blog.csdn.net/u011714944/article/details/27809199
*/

#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, x, y;
		scanf("%d", &n);
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			b[i] = 0;
		}
		b[0] = 1;
		for (int i = 1; i < n; i++) {
			x = 0; 
			bool flag = false;
			for (int j = 0; j < i; j++)
				if (a[j] > a[i] && b[j] >= b[x]) {
					x = j;
					flag = true;
				}
			if (flag == true) {
				b[i] = b[x] + 1; 
			}   
			else b[i] = 1;
		}
		x = 0;
		for (int i = 0; i < n; i++) 
			if (b[i] > b[x]) x = i;
		printf("%d\n", b[x]);	
	}
	return 0;
} 

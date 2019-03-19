/*
nyoj 456
分析: 总算是对01背包问题有了基础的认识
感谢：http://blog.csdn.net/fx677588/article/details/68951593 

背包问题变种，所有邮票价值的一半作为背包容量，尽可能把更多的邮票放到背包里，背包容量减去最大值即为差值 
*/

#include<stdio.h>
#include<string.h>

int max(int a, int b) {
	return a>b?a:b;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		int a[n+1], sum = 0;
		a[0] = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		int bagV = sum/2; //背包容量 
		int nArr[n+1][bagV+1];
		for (int i = 0; i <= n; i++) //初始化二维数组 
			for (int j = 0; j <= bagV; j++)
				nArr[i][j] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= bagV; j++) {
				if (j < a[i]) {
					nArr[i][j] = nArr[i-1][j];
				}
				else {
					nArr[i][j] = max(nArr[i-1][j], nArr[i-1][j-a[i]]+a[i]); //考虑应该装包情况 
				}
			}
		}
		printf("%d\n", sum-2*nArr[n][bagV]);
	}
	return 0;
}


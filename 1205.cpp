/*
nyoj 1205
分析:整体遍历不过，改进，由于矩阵有规律，当该列第一个元素大于要找的元素时，该列不用再遍历 
*/

#include<iostream>
#include<cstdio>
using namespace std;
int a[1005][1005];

int main() {
	int n,m,t,num;
	bool flag;
	while (~scanf("%d%d", &n,&m)) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		scanf("%d", &t);
		while (t--) {
			scanf("%d", &num);
			flag = false;
			int q = m-1, p = 0;
			while (q>=0 && p<=n) {
				if (a[p][q] == num) {
					flag = true;
					printf("%d %d\n", p+1, q+1);
					break;
				} 
				else if (a[p][q] > num) q--;
				else p++;
			}
			if (!flag) puts("NO");
		}
	}
	return 0;
}

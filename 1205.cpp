/*
nyoj 1205
����:��������������Ľ������ھ����й��ɣ������е�һ��Ԫ�ش���Ҫ�ҵ�Ԫ��ʱ�����в����ٱ��� 
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

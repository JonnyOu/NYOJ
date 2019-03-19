/*
79.
����
����˼·:�ö�ά����洢���ݣ�����������ˮ�أ�ͨ���ݹ���ã�������ˮ����Χ��ˮ�ظ�ֵΪ0��
��ֵΪ0��ˮ��ͬ����������Χ�Ƿ����ˮ�أ����ɰ�һƬ�����ˮ��ֻ����һ������Ϊ1��ˮ�� 
*/

#include<cstdio>
using namespace std;
const int MaxSize = 110;

int a[MaxSize][MaxSize];
int x[4] = {0,0,-1,1}, y[4] = {-1,1,0,0}; 
int m, n, count;

void dfs(int p, int q) {
	a[p][q] = 0;
	int s, t;
	//����ˮ�ص��ĸ���λ
	for (int i = 0; i < 4; i++) {
		s = p + x[i];
		t = q + y[i];
		if (s >= 0 && t >= 0 && s < m && t < n && a[s][t]) 
			dfs(s, t);
	}
	return ; //����õ�Ϊ½�أ�ֱ�ӷ��� 
}

int main() {
	int T, t;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		count = 0;
		for (int i = 0; i < m; i++)	
			for (int j = 0; j < n; j++) {
				if (a[i][j]) {
					count++;
					dfs(i, j);
				}
			}
		printf("%d\n", count); 
	}
	return 0;
}



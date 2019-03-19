/*
nyoj 456
����: �����Ƕ�01�����������˻�������ʶ
��л��http://blog.csdn.net/fx677588/article/details/68951593 

����������֣�������Ʊ��ֵ��һ����Ϊ���������������ܰѸ������Ʊ�ŵ����������������ȥ���ֵ��Ϊ��ֵ 
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
		int bagV = sum/2; //�������� 
		int nArr[n+1][bagV+1];
		for (int i = 0; i <= n; i++) //��ʼ����ά���� 
			for (int j = 0; j <= bagV; j++)
				nArr[i][j] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= bagV; j++) {
				if (j < a[i]) {
					nArr[i][j] = nArr[i-1][j];
				}
				else {
					nArr[i][j] = max(nArr[i-1][j], nArr[i-1][j-a[i]]+a[i]); //����Ӧ��װ����� 
				}
			}
		}
		printf("%d\n", sum-2*nArr[n][bagV]);
	}
	return 0;
}


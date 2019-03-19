/*
nyoj 860
����: 
����Ҫ��������� ����С������������ļ�ֵ
���ڱ���������� 
�����ܷ��ñ�ʾ��ֵ������洢�����ͬ��ȥʵ������Ŀ�� 
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxSize = 10005;

int min(int a, int b) {
	return a>b?b:a;
}

int main() {
	int n, w;
	while (~scanf("%d%d", &n, &w)) {
		int weight[n], value[n], sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &weight[i], &value[i]);
			sum += value[i];
		} 
		int dp[maxSize]; 
		memset(dp, 100, sizeof(dp));
		dp[0] = 0;
		for (int i = n-1; i >= 0; i--) {
			for (int j = sum; j >= value[i]; j--) {
				dp[j] = min(dp[j], dp[j-value[i]]+weight[i]);
			}
		}
		for (int i = sum; i >= 0; i--) {
			if (w >= dp[i]) {
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}


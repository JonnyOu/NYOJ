/*
nyoj 995
��������ȫ�������� 
*/ 

#include <stdio.h>   
#include <algorithm>  
const int maxInt = 0x3f3f3f3f;  
using namespace std;  
int main() {
	int dp[100005];
	int a[55];
	int N, T;
	while (scanf("%d%d", &N, &T), N&&T) {
		for (int i = 0; i < N; i++) 
			scanf("%d", &a[i]);
		for (int i = 1; i <= T; i++) 
			dp[i] = maxInt;
		dp[0] = 0;
		for (int i = 0; i < N; i++) {
			for (int j = a[i]; j <= T; j++) {
				dp[j] = min(dp[j], dp[j-a[i]]+1); //װ���ٵ�Ӳ���� 
			}
		}
		printf("%d\n", dp[T]);
	}
	return 0;
} 

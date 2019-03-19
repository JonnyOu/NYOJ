/*
nyoj 289
��̬�滮 

*/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int MaxSize = 1010;

int dp[MaxSize]; //���´洢�ռ��㹻����������ļ�ֵ 

struct Node {
	int c; //ƻ���Ĵ�С 
	int w; //ƻ���ļ�Ǯ 
};

int main() {
	int n, v;
	while (cin >> n >> v, n != 0 && v != 0) {
		Node a[n];
		for (int i = 1; i <= n; i++) 
			cin >> a[i].c >> a[i].w;
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i++) {
			for (int j = v; j >= a[i].c; j--) 
				dp[j] = max(dp[j], dp[j-a[i].c]+a[i].w); //����ÿһ��ƻ��������dp���� 
		}
		cout << dp[v] << endl;	
	}
	return 0;
}

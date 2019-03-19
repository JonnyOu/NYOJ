/*
nyoj 289
动态规划 

*/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int MaxSize = 1010;

int dp[MaxSize]; //更新存储空间足够的情况下最大的价值 

struct Node {
	int c; //苹果的大小 
	int w; //苹果的价钱 
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
				dp[j] = max(dp[j], dp[j-a[i].c]+a[i].w); //对于每一个苹果，更新dp数组 
		}
		cout << dp[v] << endl;	
	}
	return 0;
}

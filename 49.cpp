/*
nyoj 49
动态规划 
*/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int MaxSize = 30010;

int dp[MaxSize];

struct Node {
	int v; //价钱 
	int p; //重要度 
};

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, m;
		cin >> N >> m;
		Node a[m+1];f 
		for (int i = 1; i <= m; i++) 
			cin >> a[i].v >> a[i].p;
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= m; i++) {
			for (int j = N; j >= a[i].v; j--) {
				dp[j] = max(dp[j], dp[j-a[i].v]+(a[i].p*a[i].v));
			}
		}
		cout << dp[N] << endl;
	} 
	return 0;
}

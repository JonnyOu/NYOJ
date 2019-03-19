/*
nyoj 171
dp 
*/

#include<iostream>
#include<cstring>
#define max(a,b)(a>b?a:b)
using namespace std;

int main() {
	int n,m;
	while (cin >> n >> m) {
		int dp[n+1][m+1];
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= m; j++)	
				cin >> dp[i][j];	
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= m; j++)
				dp[i][j] += max(dp[i-1][j],dp[i][j-1]);
		cout << dp[n][m] << endl;
	}
	return 0;
}

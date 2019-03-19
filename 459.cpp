/*
nyoj 459
分析:隔板原理，例如数据 3 3
在5个位置上找两个位置放隔板，左边隔板的左边放第一类球，右边隔板的右边放第二类球，两块隔板中间放第三类球
C(5,2) = 10
推广 sum = C(n+m-1,n-1)  
*/ 

#include<iostream>
using namespace std;

long long ans(int n, int m) {
	long long ans = 1;
	if (n - m < m) m = n-m;
	for (int i = n; i > n-m; i--) ans *= i;
	for (int i = 2; i <= m; i++) ans /= i;
	return ans;
} 

int main() {
	int a, b;
	while (cin >> a >> b, a||b) {
		cout << ans(a+b-1,b-1) << endl;
	}
	return 0;
}


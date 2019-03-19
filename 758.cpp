/*
nyoj 758
*/

#include<iostream>
using namespace std;

int fun(int n, int m) {
	int ans = 1;
	if (n-m > m) m = n-m;
	for (int i = n; i >= n-m; i--) ans *= i;
	for (int i = 2; i <= m; i++) ans /= i;
	return ans;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,m;
		cin >> n >> m;
		cout << fun(n,m) << endl;
	} 
	return 0;
}

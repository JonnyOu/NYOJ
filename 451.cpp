/*
nyoj 451
记录下概念:
错排:当一个排列中所有元素都不在自己原来的位置上，这个排列称为错排
公式: D[n] = (n-1)(D[n-2]+D[n-1) D[1] = 0, D[2] = 1 

分析:依据题目意思，m个元素的错排D[m] * C n (n-m)的排列组合 = 得数 
*/

#include<iostream>
using namespace std;
const int maxSize = 22;
long long a[maxSize];

long long staCul() {
	a[1] = 0; a[2] = 1;
	for (int i = 3; i < maxSize; i++) {
		a[i] = (i-1)*(a[i-1]+a[i-2]);
	}
}

long long cul(int n, int m) {
	if (n-m < m) m = n-m;
	long long ans = 1;
	for (int i = n; i > n-m; i--) ans *= i;
	for (int i = m; i >= 2; i--) ans /= i;
	return ans;
}

int main() {
	staCul();
	int n, m;
	while (cin >> n >> m) {
		cout << cul(n, n-m)*a[m] << endl;
	} 
	return 0;
}

/*
nyoj 301
*/

#include<iostream>
using namespace std;
const int mod = 1000007;
int a, b, c, n;

int cul(int x, int y) {
	return (a*x+b*y+c)%mod;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int x1, x2, t;
		cin >> x1 >> x2 >> a >> b >> c >> n;
		for (int i = 3; i <= n; i++) {
			t = x2;
			x2 = cul(x1, x2);
			x1 = t;
		}
		cout << x2 << endl;
	}
	return 0;
}

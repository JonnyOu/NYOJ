/*
nyoj 473
快速幂 
*/

#include<iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0) cout << 0 << endl;
		else if (b == 0) cout << 1 << endl;
		else { //快速幂算法
			int s = 1;
			while (b > 0) {
				if (b%2 == 1) {
					s = s%10;
					a = a%10;
					s *= a;
				}
				a = a%10;
				a *= a;
				b = b >> 1;
			} 
			cout << s%10 << endl;
		}
	}
	return 0;
}

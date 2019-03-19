/*
nyoj 1227
 
*/

#include<iostream>
using namespace std;

int main() {
	int a;
	while (cin >> a) {
		if (a == 1) cout << 3 << endl;
		else if (a == 2) cout << 5 << endl;
		else if (a == 4) cout << 7 << endl;
		else if (a == 8) cout << 9 << endl;
		else if (a == 16) cout << 11 << endl;
		else if (a == 32) cout << 13 << endl;
		else if (a == 64) cout << 15 << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a) {
		b = 1;
		while (a != 0) {
			a /= 2;
			b += 2;
		}
		cout << b << endl;
	}
	return 0;
}

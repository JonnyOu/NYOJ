/*
nyoj 527
*/
#include<iostream>
using namespace std;
const int maxSize = 1000;
const int modNum = 1314520;
int f[maxSize];

void F() {
	f[0] = 1, f[1] = 1;
	for (int i = 2; i < maxSize; i++) 
		f[i] = (f[i-1]+f[i-2]) % modNum;
}

int main() {
	F();
	int n;
	while (cin >> n) {
		int a = 0, b = 0;
		while (n != 0) {
			if (n % 2 == 0) b++;
			else a++;
			n /= 2;
		}
		cout << f[a*b] << endl;
	}
}


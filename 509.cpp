#include<iostream>
#include<cmath>
using namespace std;
const int maxSize = 10005;

bool isPrime(int n) {
	if (n == 2 || n == 3) return true;
	if (n%6 != 1 && n%6 != 5) return false;
	int nSqrt = (int)(sqrt((float)n));
	for (int i = 5; i <= nSqrt; i+=6) {
		if (n%i==0 || n%(i+2)==0) return false;
	}
	return true;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		int a[maxSize] = {0}, b[maxSize] = {0}, maxn = 2;
		cin >> n;
		for (int i = 2; i <= n; i++) {
			if (isPrime(i)) {
				a[i] = 1;
				b[i]++;
				if (i > maxn) maxn = i;
			}
			else {
				int j = i, k = 2, l;
				while (j != 1) {
					while (j % k == 0) {
						b[k]++; j /= k;
					}
					for (l = k+1; a[l] != 1; l++);
						k = l;
					if (i > maxn) maxn = i;
				}
			}
		}
		for (int i = 2; i <= n; i++) {
			if (a[i]) 
				cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
} 

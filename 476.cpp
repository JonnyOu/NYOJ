/*
nyoj 476
分析：
分解质因数
例如24=2^3 ×3^1
指数+1相乘
24的约数有（3+1）×（1+1）=8个 
*/

#include<iostream>
#include<cstring>
using namespace std;
const int maxSize = 10005;
const int M = 10;
int a[maxSize];
int t[10];

bool isPrime(int x) {
	if (x % 2 == 0 && x != 2) return false;
	for (int i = 3; i*i <= x; i+=2) {
		if (x % i == 0) 
			return false;
	}
	return true;
}

int cul() {
	int N = 1;
	int flag = 0;
	for (int i = 0; i < M; i++) {
		if (isPrime(t[i])) {
			if (flag < t[i]) flag = t[i];
			a[t[i]]++;
		}
		else { //分解质因数 
			while (t[i] != 1) {
				for (int j = 2; j <= t[i]; j++) {
					if (isPrime(j) && t[i]%j == 0) {
						if (flag < j) flag = j;
						t[i] /= j;
						a[j]++;
						break;
					}
				}
			}
		}
	}
	for (int i = 2; i <= flag; i++) {
		if (a[i] != 0) {
			N *= (a[i]+1);
			N = N%10;
		}
	}
	return N;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		memset(a, 0, sizeof(a));
		memset(t, 0, sizeof(t));
		for (int i = 0; i < M; i++)
			cin >> t[i];
		cout << cul() << endl;
	}
	return 0;
} 

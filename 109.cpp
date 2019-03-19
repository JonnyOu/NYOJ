/*
nyoj 109
感谢:http://blog.csdn.net/u013207805/article/details/23613725
1、判断Sn是否相等。
2、判断{S1, S2 ,…, Sn-1}是否相等。
ps(这话说的太好):操作的变化过程是纷繁复杂的，可以说没任何规律。如果从
每一次操作对总体的贡献入手研究，会碰得头破血流。
*/

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,sumA = 0,sumB = 0;
		cin >> n;
		int a[n],b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i]; 
		}
		for (int i = 1; i < n; i++) {
			a[i] = a[i]+a[i-1];
			b[i] = b[i]+b[i-1];
		}	
		if (a[n-1] != b[n-1]) {
			cout << "No" << endl;
		}
		else {
			for (int i = 0; i < n-1; i++) {
				sumA += a[i];
				sumB += b[i];
			}
			if (sumA == sumB) 
				cout << "Yes" << endl;
			else 
				cout << "No" << endl;
		}
	}
	return 0;
}

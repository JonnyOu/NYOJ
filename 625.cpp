/*
nyoj 625
http://blog.csdn.net/aq14aq1/article/details/37757107
*/

#include<iostream>
using namespace std;

int main() {
	int a,b,arr[125],sum,n;
	while (cin >> n) {
		a = b = sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		for (int i = n-1; i >= 0; i--) {
			if (arr[i]+b >= a) {
				int temp = a;
				a = arr[i]+b;
				b = temp;
			}
		}
		cout << a << ' ' << b << ' ' << sum-a-b << endl;
	}
	return 0;
}

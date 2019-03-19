/*
nyoj 1297
ур╧Фби 
*/
#include<iostream>
using namespace std;

int main() {
	int n, sum;
	while (cin >> n, n != 0) {
		sum = 1;
		for (int i = 1; i <= n; i++) {
			sum += 2*(i-1);
		}
		cout << sum << endl;
	}
	return 0;
}

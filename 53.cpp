/*
nyoj 52
¸ÐÐ»:https://www.cnblogs.com/z-y-p/p/3677005.html 
*/ 

#include<iostream>
using namespace std;

int getNum(int k) {
	if (k == 1) return 10;
	else if (k == 2) return 100;
	else if (k == 3) return 1000;
	else if (k == 4) return 10000;
	else return 100000;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, k, temp, note;
		bool flag = false;
		cin >> n >> k;
		temp = getNum(k);
		note = n%temp;
		long long num = n%temp;
		for (int i = 1; i < temp; i++) {
			num = num*n%temp;
			if (num == note) {
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (flag == false) 
			cout << -1 << endl;
	}
	return 0;
}

/*
nyoj 990
分析:在第一只蚂蚁左边并且向右走的蚂蚁和第一只蚂蚁右边并且向左走的蚂蚁和第一只蚂蚁为最终感染数 
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int a[n],l = 0,r = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 1; i < n; i++) {
			if (abs(a[i]) < abs(a[0]) && a[i] > 0) l++;
			if (abs(a[i]) > abs(a[0]) && a[i] < 0) r++; 
		}
		if (a[0]<0&&l==0 || a[0]>0&&r==0) 
			cout << 1 << endl;
		else 
			cout << l+r+1 << endl;
	}
}

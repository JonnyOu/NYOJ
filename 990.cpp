/*
nyoj 990
分析:
蚂蚁掉头可以看作穿过通行！
穿过的两个蚂蚁如果其中一个感冒，则会感染另一个！
所以在刚开始在第一只蚂蚁左边向右走的蚂蚁个数l以及在第一只蚂蚁右边向右走的蚂蚁个数r都可能会被传染
特殊情况：当l为0且第一只蚂蚁向左走或者r为0且地一只蚂蚁向右走时，最后只有第一只蚂蚁感冒
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

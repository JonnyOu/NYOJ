/*
nyoj 698
分析:大数斐波那契数列 
看了评论区改进，为什么15000个数是一个循环呢? 
*/

#include<iostream>
using namespace std;
const int maxNum = 15010;
const int num = 10000;
int a[maxNum];

void fun() {
	a[0] = 0; a[1] = 2; a[2] = 3;
	for (int i = 3; i < maxNum; i++) 
		a[i] = (a[i-1]+a[i-2])%num;
}

int main() {
	fun();
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << a[n%(maxNum-10)] << endl;
	}
	return 0;
}


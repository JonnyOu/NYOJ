/*
nyoj 739
分析: 要求求出后一个数减去前一个数，所得的差值最大 
法一:暴力求法，没有任何意外，超时。。。
法二:优化，输入过程中，记录前面出现的所有数字的最小值，每次让输入的数字减去该最小数，平且判断更新这个最小数 
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int a[n];
		int maxMoney = -10000;
		int minNum;
		cin >> a[0];
		minNum = a[0]; 
		for (int i = 1; i < n; i++) {
			cin >> a[i];
			if (a[i]-minNum > maxMoney) maxMoney = a[i]-minNum; 
			if (a[i] < minNum) minNum = a[i];  //更新最小数 
		}
		cout << maxMoney << endl;
	}
	return 0;
} 

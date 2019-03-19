/*
nyoj 589
分析:找出最大数，当最大数n小于等于余下所有数的总和sum加1，则有解
当n = sum+1,有且只有一种解
当n < sum+1,可以有多种方案吃到使n = sum+1(n不变，sum减少) 
*/

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, sum = 0, max = 0, num;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> num;
			sum += num;
			if (max < num) max = num;
		}
		if (2*max <= sum+1)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}

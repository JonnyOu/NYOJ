/*
nyoj 754
还以为好水的排序题，最后一道数据反手一巴掌把我拍醒...
分析:比序号m大的数都在m之前出去，问题是怎么解决和m大小相同的数呢?
思路一:模拟出队 
*/

#include<iostream>
#include<cstring>
using namespace std;
const int maxSize = 1000005;
int a[maxSize];
int n,m,t,before,behind,note,sum;

int fun() {
	int max = a[note], temp = note;
	for (int i = before; i <= behind; i++) {
		if (a[i] > max) {
			temp = i;
			max = a[i];
		}
	}
//	cout << max << ' ' << temp << endl;
	if (max != a[note]) return temp;
	return -1; 
}

int main() {	
	while (cin >> n >> m) {
		memset(a, 0, sizeof(a));
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		note = m;
		sum = 0;
		before = 0; 
		behind = n-1;
		for (;;) {
//			for (int i = before; i <= behind; i++) 
//				cout << a[i] << ' ';
//			cout << endl;
//			cout << note << endl;
			t = fun();
			if (t == -1) break;
			sum++;
			t = t-before;
			for (int i = 0; i < t; i++) {
				if (before == note) {
					note = behind+1;
				}
				a[++behind] = a[before++];
			}
			before++;
		}
	//	cout << sum << endl;
		for (int i = before; i <= note; i++)
			if (a[i] == a[note]) sum++;
		cout << sum << endl;
	}
	return 0;
}

/*
6 0
1 2 1 3 4 5
*/

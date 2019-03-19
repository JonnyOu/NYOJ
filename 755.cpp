/*
nyoj 755
分析: 找到第一个可能形成山谷的峰，再找到下一个能形成山谷的峰，达成两个条件即可形成一个山谷 
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int a[n];
		for (int i = 0; i < n; i++) 
			cin >> a[i];
		int s = 0, flag, t = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > a[i+1]) {
				flag = a[i+1];
				for (int j = i+2; j < n; j++) {
					if (a[j] > flag) {
						s++;
						i = j-1;
						break;
					}
					else {
						flag = a[j];
					}
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}

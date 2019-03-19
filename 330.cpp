/*
nyoj 330
分析:每次除以这个数时取余，用数组存储，如果曾经出现过这个余数，则是第二次循环的开始 
*/

#include<iostream>
#include<cstring>
using namespace std;
const int maxSize = 100005;
int a[maxSize], b[maxSize];
int countA, countB, n;

void print() {
	if (n < 0) cout << "-";
	if (n == 1 || n == -1) cout << "1" << endl;
	else {	
		cout << "0."; 
		for (int i = 0; i < countA; i++) 
			cout << a[i];
		cout << endl; 
	}
}

int main() {
	int T, t;
	cin >> T;
	while (T--) {
		memset(b, 0, sizeof(b));
		countA = countB = 0;
		cin >> n;
		t = 1;
		b[t] = 1;
		while (1) {
			t *= 10;
			a[countA++] = t/n;
			t = t%n;
			if (t == 0 || b[t] == 1) break;
			b[t] = 1;
		}
		print();
	}
	return 0;
}

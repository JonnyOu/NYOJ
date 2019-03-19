/*
nyoj 330
����:ÿ�γ��������ʱȡ�࣬������洢������������ֹ�������������ǵڶ���ѭ���Ŀ�ʼ 
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

/*
nyoj 918
�����ĩ��ĺͳ�����������2 
*/

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << (1+n)*n/2 << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;

int f(int n) {
	if (n == 1) return 1;
	return f(n-1) + n;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << f(n) << endl;
	}
	return 0;
}

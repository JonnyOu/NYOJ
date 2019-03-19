/*
nyoj 26
��ͨ����˼·:
����ɸѡ����
��������洢ÿ������Ӧ������������ 
�˷ѿռ� 
*/
#include<iostream>
#include<cstring>
using namespace std;
const int MaxSize = 1000010;

int a[MaxSize], b[MaxSize];

void F() { //����ɸѡ 
	memset(a, 0, sizeof(a));
	for (int i = 2; i*i <= 1000000; i++) 
		if (a[i] == 0) {
			for (int j = i*2; j <= 1000000; j+=i) {
				a[j] = 1;
			}
		}
}

void V() { //���ݴ洢 
	int k = 1;
	b[1] = b[2] = 0;
	b[3] = 1;
	for (int i = 4; i <= 1000000; i++) {
		if (a[i] == 0 && a[i-2] == 0) k++;
		b[i] = k; 
	}
}

int main() {
	F(); V();
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << b[n] << endl;
	}
	return 0;
}
 

/*
nyoj 517
��1��n�������
1.���ֹ��ɣ�1��n����С���������൱�ڴ�1��n-1��
��С����������n������������ǰ��û�г��ֹ���������
2.�����������Ҫ��������洢��������������̫��Ҫ����������𰸣���������� 
*/
#include<iostream>
#include<cstring>
using namespace std;
const int MaxSize = 105;
const int MaxLength = 1000;
int a[MaxSize];
int b[MaxLength];

void F() {
	for (int i = 0; i < MaxSize; i++)
		a[i] = i;
	for (int i = 1; i < MaxSize; i++) 
		for (int j = i+1; j < MaxSize; j++) {
			if (a[j] % a[i] == 0) 
				a[j] = a[j] / a[i];
		}
}

int main() {
	F();
	int n;
	//��a[1]��a[n]��˵õ����
	while (cin >> n) {
		int k, p, s, note, max = 0;
		memset(b, 0, sizeof(b));
		b[0] = 1; 
		for (int i = 1; i <= n; i++) {
			k = 0; p = 0;
			while (k || p <= max) {
				s = b[p]*a[i]+k;
				b[p] = s%10;
				k = s/10;
				if (max < p) max = p;
				p++;
			}
		}
		for (int i = max; i >= 0; i--)
			cout << b[i];
		cout << endl;
	}
	return 0;
} 

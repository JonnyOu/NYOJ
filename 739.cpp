/*
nyoj 739
����: Ҫ�������һ������ȥǰһ���������õĲ�ֵ��� 
��һ:�����󷨣�û���κ����⣬��ʱ������
����:�Ż�����������У���¼ǰ����ֵ��������ֵ���Сֵ��ÿ������������ּ�ȥ����С����ƽ���жϸ��������С�� 
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
			if (a[i] < minNum) minNum = a[i];  //������С�� 
		}
		cout << maxMoney << endl;
	}
	return 0;
} 

/*
nyoj 990
����:
���ϵ�ͷ���Կ�������ͨ�У�
���������������������һ����ð������Ⱦ��һ����
�����ڸտ�ʼ�ڵ�һֻ������������ߵ����ϸ���l�Լ��ڵ�һֻ�����ұ������ߵ����ϸ���r�����ܻᱻ��Ⱦ
�����������lΪ0�ҵ�һֻ���������߻���rΪ0�ҵ�һֻ����������ʱ�����ֻ�е�һֻ���ϸ�ð
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int a[n],l = 0,r = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 1; i < n; i++) {
			if (abs(a[i]) < abs(a[0]) && a[i] > 0) l++;
			if (abs(a[i]) > abs(a[0]) && a[i] < 0) r++; 
		}
		if (a[0]<0&&l==0 || a[0]>0&&r==0) 
			cout << 1 << endl;
		else 
			cout << l+r+1 << endl;
	}
}

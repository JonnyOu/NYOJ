/*
nyoj 109
��л:http://blog.csdn.net/u013207805/article/details/23613725
1���ж�Sn�Ƿ���ȡ�
2���ж�{S1, S2 ,��, Sn-1}�Ƿ���ȡ�
ps(�⻰˵��̫��):�����ı仯�����Ƿ׷����ӵģ�����˵û�κι��ɡ������
ÿһ�β���������Ĺ��������о���������ͷ��Ѫ����
*/

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,sumA = 0,sumB = 0;
		cin >> n;
		int a[n],b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i]; 
		}
		for (int i = 1; i < n; i++) {
			a[i] = a[i]+a[i-1];
			b[i] = b[i]+b[i-1];
		}	
		if (a[n-1] != b[n-1]) {
			cout << "No" << endl;
		}
		else {
			for (int i = 0; i < n-1; i++) {
				sumA += a[i];
				sumB += b[i];
			}
			if (sumA == sumB) 
				cout << "Yes" << endl;
			else 
				cout << "No" << endl;
		}
	}
	return 0;
}

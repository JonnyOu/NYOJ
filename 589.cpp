/*
nyoj 589
����:�ҳ���������������nС�ڵ����������������ܺ�sum��1�����н�
��n = sum+1,����ֻ��һ�ֽ�
��n < sum+1,�����ж��ַ����Ե�ʹn = sum+1(n���䣬sum����) 
*/

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, sum = 0, max = 0, num;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> num;
			sum += num;
			if (max < num) max = num;
		}
		if (2*max <= sum+1)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}

/*
nyoj 459
����:����ԭ���������� 3 3
��5��λ����������λ�÷Ÿ��壬��߸������߷ŵ�һ�����ұ߸�����ұ߷ŵڶ�������������м�ŵ�������
C(5,2) = 10
�ƹ� sum = C(n+m-1,n-1)  
*/ 

#include<iostream>
using namespace std;

long long ans(int n, int m) {
	long long ans = 1;
	if (n - m < m) m = n-m;
	for (int i = n; i > n-m; i--) ans *= i;
	for (int i = 2; i <= m; i++) ans /= i;
	return ans;
} 

int main() {
	int a, b;
	while (cin >> a >> b, a||b) {
		cout << ans(a+b-1,b-1) << endl;
	}
	return 0;
}


/*
nyoj 971
����:
�ܾ�֮ǰ������һ���⣬��Ϊû˼·�ͷ����ˣ������żȻ����żȻ������˼· 
1.����ʱ��:�������м�������ܳ�ȥ��������Ҫ����ʱ��
2.�ʱ��:������ߵ������ܵ���һ������ʱ�����  
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double N,L,n,min,max,t;
	while (cin >> N >> L) {
		min = L, max = 0;
		t = L/2;
		for (int i =0; i < N; i++) {
			cin >> n;
			if (abs(t-n) < min) min = abs(t-n);
			if (((L-n)>max) || (n>max)) {
				if (L-n > n) max = L-n;
				else max = n;
			}
		}
		if (abs(max-L)>max) max = abs(max-L);
		cout << "The minimum time is: " << t-min << endl;
		cout << "The maximum time is: " << max << endl;
	}
	return 0;
}

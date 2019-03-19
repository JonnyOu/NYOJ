/*
nyoj 744
����: 
���^��
�������Ķ����ƽ���������㣬ͬλ��ͬΪ0��ͬΪ����Ϊ1
����: 8^9  => (1000)2 ^ (1001)2 = (0001)2 => 1

����������a,b, 
�磺 
8��9 ������������������ֵ ��1��2 = 2^1-1(�˴�Ϊ2��1�η���1)
1��2 ������������������ֵ ��11��2 = 2^2-1

����:Ѱ��һ��������ĳ�������������ֵx��x = 2^n-1 (2��n�η���1)��n Ϊ a^b��λ�� 

new:����2��n�η����ô��� long long res = 1; (res << n), ע��<<�����ȼ� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int Count(long long x) {
	int count = 0;
	while (x != 0) {
		count++;
		x /= 2;
	}
	return count;
}

int main() {
	long long a, b;
	while (cin >> a >> b) {
		long long x = a^b, res = 1;
		cout << ((res<<Count(x)) - 1) << endl;
	} 
	return 0;
}

/*
��2 
*/
#include<iostream>
using namespace std; 

int main() {
	long long a, b, x, res;
	while (cin >> a >> b) {
		x = a^b;
		for (res = 1; res <= x; res <<= 1); //res <<= 1 => res = res << 1 => ��˼��res�Ķ�������ʽ������һλ��������2 
		cout << (res-1) << endl;
	} 
	return 0;
}

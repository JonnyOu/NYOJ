/*
aʤ��: a��ԣ�bû�д�ԣ� (a%) * (1-b%)
bʤ��: a���1 - a%
ÿһ�ֶ����˼���ʤ�����ʣ�����Ӱ��
*/

#include<cstdio>
using namespace std;

//�������������Լ��
int gcd(int a, int b) {
	int t;
	while (a % b != 0) {
		t = b;
		b = a%b;
		a = t; 
	}
	return b;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, c, d;
		scanf("%d%d", &a, &b);
		//c,d �ɼ��㻯�����
		c = a*(100-b);
		d = 10000-a*b;
		printf("%d/%d %d/%d\n", c/gcd(c,d), d/gcd(c,d), d/gcd(c,d)-c/gcd(c,d), d/gcd(c,d));
	}
	return 0;
} 

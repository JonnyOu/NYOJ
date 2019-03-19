/*
��ŵ���������⹫ʽ:2^n-1
�������ӣ�http://blog.csdn.net/wangdan11111/article/details/45587559
*/

#include<cstdio>
using namespace std;

//������
long long pow(int n) {
	long long r = 1, t = 2;
	while (n > 0) {
		if (n % 2 == 1) r = r*t%1000000;
		n /= 2;
		t = t*t%1000000;
	}
	return r;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", pow(n)-1);
	}
	return 0;
}

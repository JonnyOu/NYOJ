/*
��ͬʱ����ά�޵��������ٳ���36 
*/

#include<cstdio>
using namespace std;

//����С������
int F(int x, int y) {
	int a = x, b = y, t;
	while (a % b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return x*y/b;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int x, y, n; 
		long long n, sum;
		scanf("%d%d%lld", &x, &y, &n);
		sum = 36*(n/(F(x+1, y+1)));
		printf("%lld\n", sum);
	}
	return 0;
} 

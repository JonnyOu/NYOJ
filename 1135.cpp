#include<cstdio>
#include<cmath>
using namespace std;

//������С���� 
int JinZhi(int n) {
	int t = 0;
	while (n != 0) {
		if (t < (n % 10)) t = n%10;
		n /= 10;
	}
	return t+1;
}

//��ȡһ������λ��
int WeiShu(int n) {
	int sum = 0;
	while (n != 0) {
		sum++;
		n /= 10;
	}
	return sum;
} 

//���Ƽ���,b���Ƶ�nת��Ϊ10���� (������ĸ.....)
int Cal(int n, int b) {
	int sum = 0, t = WeiShu(n);
	while (t--) {	
		int k = pow(10,t);
		sum = sum*b+n/k;
		n = n%k;
	}
	return sum; 
} 

int main() {
	int p, q, r, t, g;
	while (~scanf("%d%d%d", &p, &q, &r)) {
		t = (JinZhi(p)>JinZhi(q))?(JinZhi(p)>JinZhi(r)?JinZhi(p):JinZhi(r)):(JinZhi(q)>JinZhi(r)?JinZhi(q):JinZhi(r));
		for (;;) {
			if (Cal(p,t)*Cal(q,t) == Cal(r,t)) break;
			if (Cal(p,t)*Cal(q,t) < Cal(r,t) || t > 16) {
				t = 0;
				break;
			}
			t++;
		}
		printf("%d\n", t);
	}
	
}

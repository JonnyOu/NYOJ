/*
nyoj 45
���˺þ�����������⣬�������˽���˼·������˼·����ȷ�������ݺܴ��ָĽ� 
*/ 

//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int k;
//		long long s;
//		scanf("%d", &k);
//		s = pow(2,k)*pow(2,k)-1;
//		if (s % 3 == 0) printf("%lld\n", s/3);
//		else printf("%lld\n", s/3+1); 
//	}
//	return 0;
//} 

#include<iostream>
#include<cstring>
using namespace std;
int a[105], b[105], count, countB;

void bigNum(int k) { //�õ�4��k�η���1 
	int n = 0;
	count = 1;
	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < count; j++) {
			int temp = a[j]*4+n;
			a[j] = temp%10;
			n = temp/10;
		}
		while (n != 0) {
			a[count++] = n%10;
			n /= 10;
		}
	}
	a[0] = a[0]-1; //����4^kĩλһ����4��6���̼�һ����Ӱ���λ 
}

void cul(int n) { //�������,����4���ݴη���һ�����ı������д����� 
	for (int i = count-1; i >= 0; i--) 
		cout << a[i];
	cout << endl;
	int sum = 0;
	countB = 0;
	memset(b, 0, sizeof(b));
	while (count != 0 || sum != 0) {
		if (sum > n) {
		//	cout << '1' << sum << endl;
			b[countB++] = sum/n;
			sum = sum%n;
		}
		else {
			if (count != 0)
				sum = sum*10+a[--count];
		//	cout << '0' << sum << endl; 
		}
	}
	for (int i = 0; i < countB; i++) 
			cout << b[i];
	cout << endl; 
} 

int main() {
	int T;
	cin >> T;
	while (T--) {
		int k;
		cin >> k;
		bigNum(k);
		cul(3);
	}
	return 0;
}

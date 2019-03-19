/*
nyoj 291
����: euler ŷ������ ŷ��������С��n������������n���ʵ�������Ŀ����(1)=1�� ���  
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int euler(int n) {
  int sum = 1;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			sum *= i-1, n /= i;
			while (n%i == 0) 
				n /= i, sum *= i;
		}
	}
	if (n >= 2) sum *= n-1;
	return sum;
}


int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		printf("%d\n", euler(n));
	}
	return 0;
}

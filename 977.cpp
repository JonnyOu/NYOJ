/*
�������������� 
n Ϊ���� n = n*(n-1)*(n-2)
n Ϊż�� n �� n-2 �й�����2��������
����n*(n-1)*(n-3)	�ж�n��n-3�Ƿ��й�����3��������������
�� n*(n-1)*(n-4)��n��n-4�й�����2����������
��ʱ����(n-1)*(n-2)*(n-3)  > n*(n-1)*(n-5) ���� 
 (n-1)*(n-2)*(n-3)��Ϊ�� 
*/ 
#include<stdio.h>
int main() {
	long long n;
	while (~scanf("%lld", &n)) {
		long long s = 1;
		if (n <= 2) s = n; 
		else if (n & 1) s = n*(n-1)*(n-2);
		else 
			if (n%3) s = n*(n-1)*(n-3); 
			else s = (n-1)*(n-2)*(n-3); 
		printf("%lld\n", s);
	}
}

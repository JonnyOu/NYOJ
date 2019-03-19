#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
const int MaxSize = 1000001;

int a[MaxSize], b[MaxSize];

//��������ɸѡ,������ѷ˹ɸѡ�� 
void isPrime() {
	int m = sqrt(MaxSize), count = 1;
	for (int i = 2; i < MaxSize; i++) {  //���е�MaxSize��Ϊm��< ��Ϊ <= ʱ������6548�����������һ�� 
		if (!a[i]) {									     //����ɸѡ��b����sqrt(MaxSize)���ڵ��������ѡ����� 
			b[i] = count++;
			for (int j = 2; j*i < MaxSize; j++) 
					a[j*i] = 1;
		} 
	}
} 
/*
q:Ϊʲô����ͨ����ʵ�ֲ������У� ����ռ����⣿ 
for (int j = i*i; j < MaxSize; j += i) 
				a[j] = 1;
*/ 

//������������ӵ���� 
int MaxPrime(int n) {
	if (n == 1) return 0;
	else {
		int note = 0;
		for (int i = 2; i*i <= n; i++) {
			if (!a[i] && n % i == 0) {
				note = b[i];
				while (n % i == 0) n /= i; 
			}
		}
		if (n > 1) note = note>b[n]?note:b[n];
		return note; 
	}
} 

int main() {
	isPrime();
	int n;
	while (~scanf("%d", &n)) 
		printf("%d\n", MaxPrime(n));
	return 0;
} 

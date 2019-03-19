/*
����˼·:
��N�Ķ������У���һ�����������ģ����λ��1��0�������Сһλ��1����λ�ã����������������N���Ȩ����ȵ���С���� 
�����Ҫ��λ��������1Ų�����λ 
*/

#include<cstdio>
#include<cmath>
using namespace std;
const int MaxSize = 50;
int a[MaxSize];

//������ת�� 
int F(int N) {
	int n = 0;
	while (N != 0) { 
		a[n++] = N % 2; 
		N /= 2; 
	}
	return n;
}

int main() {
	int N;
	while (~scanf("%d", &N)) {
		int n = 0, t1, t2, note = F(N), sum = 0;
		bool flag = false;
		for (;;) {
			if (a[n] == 1 && flag == false) { flag = true; t1 = n; }
			if (a[n] == 0 && flag == true || n == note) { t2 = n; break; }
			n++;
		}
		sum = (int)pow(2, t2);
		for (int i = 0; i < (t2-t1-1); i++) sum += (int)pow(2, i);
		for (int i = t2+1; i < note; i++) {
			if (a[i] == 1) sum += (int)pow(2, i);
		} 
		printf("%d\n", sum);
	}
	return 0;
} 

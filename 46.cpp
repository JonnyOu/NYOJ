/*
46.
����˼·:
��Ϊ2���ƣ�����nλ�� 
���λ��Ҫ(n-1)��������ܵõ�
�Ӹ�λ���±�����ÿ����һ��1������Ҫ������������ 
*/

#include<cstdio>
using namespace std;
const int MaxSize = 300;

int a[MaxSize];

//��������Ϊ2���ƴ洢�������У���������λ��
int Bia(int n) {
	int i = 0;
	while (n != 0) {
		a[i++] = n % 2;
		n /= 2;
	}
	return i;
} 

int main() {
	int T;
	scanf("%d", &T);	
	while (T--) {
		int n, len, sum = 0;
		scanf("%d", &n);
		len = Bia(n);
		for (int i = 0; i < len-1; i++)
			if (a[i] == 1)
				sum++;
		printf("%d\n", len-1+sum);		 
	}
	return 0;
}

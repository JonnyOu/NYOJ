/*
           0                  1
     0            1           0
   0     1        0       0       1           
0    1   0     0    1   0   1     0

ÿ����һ���ֽڣ�������ǰ����õķ����������ӵķ�����  
���ӵķ���������ȫ��ķ����������һ���ַ�Ϊ0�ĸ���
����쳲��������� 
*/

#include<stdio.h>
#include<string.h>
const int maxn = 41;
long long a[maxn] = {0,1,3,5};
void F() {
	memset(a, 0, sizeof(maxn));
	for (long long i = 4; i <= maxn; i++)
		a[i] = a[i-1] + a[i-2];
}

int main() {
	F();
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", a[n]);
	}
	return 0;
} 

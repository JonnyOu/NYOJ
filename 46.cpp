/*
46.
解题思路:
化为2进制，设有n位数 
最高位需要(n-1)次运算才能得到
从高位往下遍历，每当有一个1，就需要增加依次运算 
*/

#include<cstdio>
using namespace std;
const int MaxSize = 300;

int a[MaxSize];

//将整数化为2进制存储在数组中，返回数组位数
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

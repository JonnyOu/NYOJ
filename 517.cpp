/*
nyoj 517
求1到n的最公倍数
1.发现规律，1到n的最小公倍数，相当于从1到n-1的
最小公倍数乘与n的素因子中在前面没有出现过的素因子
2.利用数组把需要乘与的数存储起来，由于数据太大，要用数组输出答案，即大数相乘 
*/
#include<iostream>
#include<cstring>
using namespace std;
const int MaxSize = 105;
const int MaxLength = 1000;
int a[MaxSize];
int b[MaxLength];

void F() {
	for (int i = 0; i < MaxSize; i++)
		a[i] = i;
	for (int i = 1; i < MaxSize; i++) 
		for (int j = i+1; j < MaxSize; j++) {
			if (a[j] % a[i] == 0) 
				a[j] = a[j] / a[i];
		}
}

int main() {
	F();
	int n;
	//把a[1]到a[n]相乘得到结果
	while (cin >> n) {
		int k, p, s, note, max = 0;
		memset(b, 0, sizeof(b));
		b[0] = 1; 
		for (int i = 1; i <= n; i++) {
			k = 0; p = 0;
			while (k || p <= max) {
				s = b[p]*a[i]+k;
				b[p] = s%10;
				k = s/10;
				if (max < p) max = p;
				p++;
			}
		}
		for (int i = max; i >= 0; i--)
			cout << b[i];
		cout << endl;
	}
	return 0;
} 

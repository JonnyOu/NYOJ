#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
const int MaxSize = 1000001;

int a[MaxSize], b[MaxSize];

//素数快速筛选,爱拉托逊斯筛选法 
void isPrime() {
	int m = sqrt(MaxSize), count = 1;
	for (int i = 2; i < MaxSize; i++) {  //此行的MaxSize改为m，< 改为 <= 时，输入6548，输出的数不一样 
		if (!a[i]) {									     //快速筛选出b数组sqrt(MaxSize)以内的素数而已。。。 
			b[i] = count++;
			for (int j = 2; j*i < MaxSize; j++) 
					a[j*i] = 1;
		} 
	}
} 
/*
q:为什么用普通代码实现不能运行？ 数组空间问题？ 
for (int j = i*i; j < MaxSize; j += i) 
				a[j] = 1;
*/ 

//返回最大素因子的序号 
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

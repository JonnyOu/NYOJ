/*
nyoj 744
分析: 
异或（^）
两个数的二进制进行异或运算，同位相同为0，同为相异为1
例如: 8^9  => (1000)2 ^ (1001)2 = (0001)2 => 1

给出两个数a,b, 
如： 
8，9 区间中两个数异或最大值 （1）2 = 2^1-1(此处为2的1次方减1)
1，2 区间中两个数异或最大值 （11）2 = 2^2-1

结论:寻找一个区间中某两个数异或的最大值x，x = 2^n-1 (2的n次方减1)，n 为 a^b的位数 

new:计算2的n次方可用代码 long long res = 1; (res << n), 注意<<的优先级 
*/
#include<iostream>
#include<cmath>
using namespace std;

int Count(long long x) {
	int count = 0;
	while (x != 0) {
		count++;
		x /= 2;
	}
	return count;
}

int main() {
	long long a, b;
	while (cin >> a >> b) {
		long long x = a^b, res = 1;
		cout << ((res<<Count(x)) - 1) << endl;
	} 
	return 0;
}

/*
法2 
*/
#include<iostream>
using namespace std; 

int main() {
	long long a, b, x, res;
	while (cin >> a >> b) {
		x = a^b;
		for (res = 1; res <= x; res <<= 1); //res <<= 1 => res = res << 1 => 意思是res的二进制形式向右移一位，即乘以2 
		cout << (res-1) << endl;
	} 
	return 0;
}

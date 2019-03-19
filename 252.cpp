/*
           0                  1
     0            1           0
   0     1        0       0       1           
0    1   0     0    1   0   1     0

每增加一个字节，计算在前面算得的方案数上增加的方案数  
增加的方案数等于全面的方案数中最后一个字符为0的个数
符合斐波那契数列 
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

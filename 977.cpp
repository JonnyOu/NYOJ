/*
连续的奇数互质 
n 为奇数 n = n*(n-1)*(n-2)
n 为偶数 n 与 n-2 有公因数2不做考虑
考虑n*(n-1)*(n-3)	判断n与n-3是否有公因数3，若有则不做考虑
又 n*(n-1)*(n-4)中n与n-4有公因数2，不做考虑
此时由于(n-1)*(n-2)*(n-3)  > n*(n-1)*(n-5) （） 
 (n-1)*(n-2)*(n-3)即为答案 
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

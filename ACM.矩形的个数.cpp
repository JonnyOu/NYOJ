#include<stdio.h>
int main()
{
    long long x,y,s;
	while(scanf("%lld%lld", &x, &y) != EOF)
	{
    s = (x + 1) * x * (y + 1) * y / 4;
    printf("%lld\n", s);
	}
	return 0;
} 

/*
———

——— 
	发现规律：
		长*宽  个数 
		1 * 1   6
		1 * 2   4
		1 * 3   2
		2 * 1   3 
		2 * 2   2
		2 * 3   1
	   左边 = 右边 
		 
*/

//#include<stdio.h>
//int main() {
//	long long x, y, sum;
//	while (scanf("%lld%lld", &x, &y) != EOF) {
//		sum = 0;
//		for (int i = 1; i <= x; i++) 
//		for (int j = 1; j <= y; j++) 
//			sum += i*j;
//		printf("%lld\n", sum);
//	}
//} 

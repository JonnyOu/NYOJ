/*
a胜利: a答对，b没有答对， (a%) * (1-b%)
b胜利: a答错，1 - a%
每一轮都按此计算胜利概率，互不影响
*/

#include<cstdio>
using namespace std;

//求两个数的最大公约数
int gcd(int a, int b) {
	int t;
	while (a % b != 0) {
		t = b;
		b = a%b;
		a = t; 
	}
	return b;
} 

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, c, d;
		scanf("%d%d", &a, &b);
		//c,d 由计算化简而得
		c = a*(100-b);
		d = 10000-a*b;
		printf("%d/%d %d/%d\n", c/gcd(c,d), d/gcd(c,d), d/gcd(c,d)-c/gcd(c,d), d/gcd(c,d));
	}
	return 0;
} 

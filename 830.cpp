/*
nyoj 830
分析:简单数学题。。。。
公式:
x = x'cosa-y'sina
y = y'*b+x'*a 
*/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	double x,y,a,b;
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%lf%lf%lf%lf", &x, &y, &a, &b);
		double t = x*b-y*a;
		printf("%.2lf %.2lf\n", t, y*b+x*a);
	}
	return 0;
}

/*
nyoj 1113
*/ 

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	double h,m;
	char c;
	while (scanf("%lf%c%lf", &h, &c, &m), h||m) {
		if (h == 12.0) h = 0.0;
		double s = abs(h*30-m*5.5);
		if (s <= 180) 
			printf("%.3lf\n", s);
		else 
			printf("%.3lf\n", 360-s);
	}
	return 0;
}

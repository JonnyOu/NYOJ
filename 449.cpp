/*
nyoj 449
����: ������ʽ  v*t=h*t=��dh *s [H,��h�ϵĻ���]  
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		double H, t, h, s;
		cin >> H >> t >> h;
		s = t/log(H/h);
		printf("%.1lf\n", s);
	}
	return 0;
} 

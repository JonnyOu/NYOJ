/*
nyoj 815
����:��������
1.�ж��Ƿ��ܳ�Ϊ�����Σ��������㲻��һ�ߣ��ܳ�Ϊһ��������
2.֪�������ζ������꣬�����ʽ
S=(1/2)*(x1y2+x2y3+x3y1-x1y3-x2y1-x3y2) 
*/

#include<iostream>
#include<cstdio>
using namespace std;

bool isTangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	double k = (x2-x1)/(y2-y1);
	double b = y2- x2*k;
	if (k*x3+b == y3) return true;
	return false;
}

double getArea(double x1, double y1, double x2, double y2, double x3, double y3) {
	return (1/2)*(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		double x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if (isTangle(x1,y1,x2,y2,x3,y3) == false) {
			cout << "Can not form a triangle." << endl;
			continue;
		}
		double t = getArea(x1,y1,x2,y2,x3,y3);
		printf("%.3lf\n", t);
	}
	return 0;
}

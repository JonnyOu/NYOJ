/*
nyoj 785
����: �Ǻǣ�����Ϊ����ʲô�ӡ����� 
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	double width, hight;
	while (scanf("%lf%lf", &width, &hight), width||hight) {
		double t = 3*sqrt(width*width/9+hight*hight);
		//cout << t << endl;
		printf("%.lf\n", t); 
	}
	return 0;
}

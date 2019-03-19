#include<cstdio>
#include<cmath>
using namespace std;
const double pi = 3.14159265;

int main() {
	double x0, y0, x1, y1, t, sina, cosa, x, y;
	while (~scanf("%lf%lf%lf%lf%lf", &x0, &y0, &x1, &y1, &t)) {
		sina = sin(t/180*pi);
		cosa = cos(t/180*pi);
		x=x1*cosa-y1*sina-x0*cosa+y0*sina+x0;//ÓÃµ½Ðý×ª¾ØÕó  
    y=x1*sina+y1*cosa-x0*sina-y0*cosa+y0;  
  	printf("%.1lf %.1lf\n",x,y);  
	}
	return 0;
}

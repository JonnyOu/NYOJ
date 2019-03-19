//S=(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/2

#include<cstdio>
#include<cmath>
using namespace std;

double Area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double area = (x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1) / 2;
	return area;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		double x[105], y[105], sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf", &x[i], &y[i]);
		}
		for (int i = 1; i+1 < n; i++) {
			sum += Area(x[0],y[0],x[i],y[i],x[i+1],y[i+1]);
		}
		printf("%.2lf\n", fabs(sum));
	}
	return 0;
} 


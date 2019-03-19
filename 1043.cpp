#include<cstdio>
#include<cmath>
using namespace std;

//0~2
double F1(double a) {
	return (4*pow(a,1.5)/3-0.4*pow(a,2.5));
}

//2~5
double F2(double a) {
	return (pow(a,4)/4-2*pow(a,3)/3-0.5*pow(a,2)+2*a);
}

//5~10
double F3(double a) {
	return (72*a-pow((a-5),1.875)*8/15);
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		double a, b;
		scanf("%lf%lf", &a, &b);
		if (a >= 0 && a <= 2) {
			if (b <= 2) printf("%.lf\n", F1(b)-F1(a));
			else if (b <= 5) printf("%.lf\n", F2(b)-F2(2)+F1(2)-F1(a));
			else printf("%.lf\n", F3(b)-F3(5)+F2(5)-F2(2)+F1(2)-F1(0));
		}
		else if (a >= 2 && a <= 5) {
			if (b <= 5) printf("%.lf\n", F2(b)-F2(a));
			else printf("%.lf\n", F3(b)-F3(5)+F2(5)-F2(a));
		}
		else {
			printf("%.lf\n", F3(b)-F3(a));
		}
	}
	return 0;
}


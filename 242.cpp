#include<stdio.h>
const double PI = 3.1415926;
int main() {
	double rad;
	while (scanf("%lf", &rad) != EOF) {
		int n = 0.5+4*PI*rad*rad*rad/3;
		printf("%d\n", n);
	}
}

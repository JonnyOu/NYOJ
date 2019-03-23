#include <bits/stdc++.h>
using namespace std;

const double PI=3.1415926;

int main() {
	double r;
	while (cin >> r) {
		double v = 4*PI*pow(r,3)/3;
		printf("%.lf\n", v);
	}
	return 0;
}



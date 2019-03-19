#include<cmath>
#include<cstdio>
using namespace std;

int main() {
	double n, p;
	while (scanf("%lf%lf", &n, &p), n||p) {
		printf("%.lf\n", pow(p, 1/n));
	}
	return 0;
} 

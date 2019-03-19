/*
只允许在路中间部署
1.直径是否大于宽 
2.路由器之间的距离即为一个路由器覆盖的长度 
*/

#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		double length, width, r, t;
		scanf("%lf%lf%lf", &length, &width, &r);
		if (2*r <= width) {
			printf("impossible\n"); continue;
		}
		t = sqrt(r*r-(width/2)*(width/2));
		if (2*t < 1) {
			printf("impossible\n"); continue;
		}
		int k = (int)(length/(2*t));
		if (k*(2*t) == length) 
			printf("%d\n", k);
		else 
			printf("%d\n", k+1);
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
//求两点距离的函数
int r(double x, double y) {
	if (sqrt((x-1)*(x-1)+(y-1)*(y-1)) < 6) return 1;
	else if (sqrt((x-1)*(x-1)+(y-1)*(y-1)) == 6) return 0;
	return -1;
} 
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		double x, y;
		scanf("%lf%lf", &x, &y);
		if (r(x,y) > 0) printf("In\n");
		else if (r(x,y) == 0) printf("On\n");
		else printf("Out\n"); 
	}
}

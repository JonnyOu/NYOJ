//¹«Ê½£ºs = (ad£«be£«cf£­af£­bc£­de)/2 

#include<stdio.h>
#include<math.h>
int main() {
	float x1, y1, x2, y2, x3, y3;
	while (~scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3), x1||y1||x2||y2||x3||y3) 
		printf("%.1f\n", fabs((x1*y2+y1*x3+x2*y3-x1*y3-y1*x2-y2*x3)/2));
}

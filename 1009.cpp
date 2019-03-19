#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c;
	while (scanf("%f%f%f", &a, &b, &c) != EOF) {
		printf("%.2f\n", a/(sqrt(1-pow((b*b+c*c-a*a)/(2*b*c),2))*2));
	}
}

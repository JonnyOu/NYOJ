#include<stdio.h>
#define PI 3.1415926
int main() {
	int n, k = 1;
	scanf("%d", &n);
	while (n--) {
		float x, y, area;
		int year;
		scanf("%f%f", &x, &y);
		area = PI*((x*x)+(y*y))/2;
		year = (int)(area/50)+1;
		printf("Property %d: This property will begin eroding in year %d.\n", k, year);
		k++;
	}
	printf("END OF OUTPUT.");
} 

#include<stdio.h>
int main() {
	float X, Y;
	while (~scanf("%f%f", &X, &Y)) {
		if (X == 0 || Y == 0) 
			printf("0.00\n");
		else 
			printf("%.2f\n", X*Y/(X+Y));
	}
} 

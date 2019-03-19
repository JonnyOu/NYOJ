#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main() {
	int n;
	scanf("%d", &n);
	double arr[n];//flaot 不能通过 
	
	for (int i = 0; i < n; i++) 
		scanf("%lf", &arr[i]);
	for (int i = 0; i < n; i++)
		printf("%.2f\n", PI*pow(arr[i]/sqrt(3), 2));
}

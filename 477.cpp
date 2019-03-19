#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b - c > -0.0001 && a + b - c < 0.0001) //×¢Òâ¿´Ìâ 
	printf("Yes\n");
	else 
	printf("No\n");
	} 	
}

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	while(scanf("%f%f%f", &a, &b, &c) != EOF)
	{
		float sum,L,R;
		L = (a + b + c)/2;
		sum = sqrt(L * (L - a) * (L - b) * (L - c));
		R = a * b * c / (4 * sum);
		printf("%.2f\n", R);
	}
}

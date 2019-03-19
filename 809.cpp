#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		float a[7];
		for (int i = 0; i < 7; i++)
		scanf("%f", &a[i]);
		sort(a,a+7);
		float sum = (a[0] + a[3] + a[6]) / 3;
		printf("%.2f\n", sum);
	}
}

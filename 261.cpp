#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a[9];
		for(int i = 0; i < 9; i++)
		scanf("%d", &a[i]);
		printf("%d %d %d\n", a[0], a[3], a[6]);
		printf("%d %d %d\n", a[1], a[4], a[7]);
		printf("%d %d %d\n", a[2], a[5], a[8]);
		printf("\n");
	}
}

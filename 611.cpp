#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n)) {
		int s = 0;
		for (int i = 2; i <= n; i+=2)
		s += i;
		printf("%d\n", s);
	}
}

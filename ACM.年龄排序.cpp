#include <stdio.h>
int main( void )
{
	int a[151] = {0}, n, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		a[m]++;
	}
	for (int i = 0; i <= 150; i++)
			for (int j = 0; j < a[i]; j++)
			printf("%d ", i);
}

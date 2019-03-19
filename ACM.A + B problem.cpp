#include<stdio.h>
int fanzhuan(int n);
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y), x || y) {
		x = fanzhuan(x);
		y = fanzhuan(y);
		printf("%d\n", x+y);
	}
} 

int fanzhuan(int n) {
	int m = 0;
	while (n != 0) {
	    m *= 10;
	    m += n % 10;
	    n /= 10;
	}
	return m;
}

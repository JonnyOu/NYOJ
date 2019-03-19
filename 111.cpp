#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int greatest_commom_divisor(int a, int b);//求最大公因数 
int main()
{
	int a, b, c, d;
	char x, y, z;
	while (scanf("%d%c%d%c%d%c%d", &a, &x, &b, &y, &c, &z, &d) != EOF)
	{
		int m, j, k;
		if (y == '+')
		{
			j = b * d;
			k = a * d + b * c;
			m = greatest_commom_divisor(k,j);
	        if (m == j)
	        printf("%d\n", k / m);
			else  
			printf("%d/%d\n", k / m, j / m);
		}
		else
		{
			j = b * d;
			k = a * d - b * c;
		    m = greatest_commom_divisor(abs(k),j);
		    if (m == j)
	        printf("%d\n", k / m);
	        else
			printf("%d/%d\n", k / m, j / m);
		}
	}
}

int greatest_commom_divisor(int a, int b) //最大公因数 
{
	int m; 
	while (a % b != 0)
			{
				m = b;
				b = a % b;
				a = m;
			}
	return b;
}


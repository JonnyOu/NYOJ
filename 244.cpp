#include<stdio.h>
#include<string.h>
#include<math.h>
int main( void )
{
	int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        int m,x,sum;
        int y = 0, z = 0, j = 0;
        char a[15];
        int b[15], c[15];
		gets(a);
		m = strlen(a);//printf("%d\n", m);
		for (int i = 0; a[i] != '+' && a[i] != '-'; i++)
		x = i + 1;//printf("%d\n", x);
        for (int i = 0; i < m; i++)
        {
        	switch (a[i])
			{
			case 'a':{b[i] = 10;break;} 
			case 'b':{b[i] = 11;break;} 
			case 'c':{b[i] = 12;break;} 
			case 'd':{b[i] = 13;break;} 
			case 'e':{b[i] = 14;break;} 
			case 'f':{b[i] = 15;break;} 
			default:{b[i] = a[i] - '0';}
			}
        }
       /* for (int i = 0; i < m; i++)
        printf("%d ",b[i]);
        printf("\n");*/
        for (int i = 0; i < x; i++)
        y += b[i] * pow(16,x - 1 - i);
        for (int i = x + 1; i < m; i++)
        z += b[i] * pow(16,m - 1 - i);
        if (a[x] == '+')
        {
        sum = z + y;//printf("%d %d\n", y, z);
        while(sum != 0)
        {
        	c[j] = sum % 8;
        	sum /= 8;
        	j++;
        }
        for (int i = j - 1; i > -1; i--)
        printf("%d", c[i]);
        printf("\n");
        }
        else
        {
        sum = y - z;//printf("%d %d\n", y, z);
        while(sum != 0)
        {
        	c[j] = sum % 8;
        	sum /= 8;
        	j++;
        }
        for (int i = j - 1; i > -1; i--)
        printf("%d", c[i]);
        printf("\n");
        }
    }
}


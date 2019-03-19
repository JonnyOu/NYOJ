#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
    	char a[10];
    	int sum;
    	scanf("%s", a);
    	int x,y,z;
    	if(strcmp(a,"Sunday") == 0 || strcmp(a,"Saturday") == 0)
    	{
    		scanf("%d%d%d", &x, &y, &z);
    		printf("%d\n", x + y + z);
    	}
    	else
    	{
    		scanf("%d%d", &x, &y);
    		printf("%d\n", x + y );
    	}
    }
}

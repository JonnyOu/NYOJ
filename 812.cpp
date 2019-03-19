#include<stdio.h>
int num[225];
int binary_system(int a);
void binary_system_change(int x);
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {   int sum = 0;
    for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);
    for (int i = 0; i < n; i++)
    if(binary_system(num[i]))
    sum += num[i];
//  printf("%d\n", sum);
binary_system_change(sum);
    }
    } 
int binary_system(int a)
{
    int m = 0;
    while(a != 0)
    {
        if(a % 2 == 1)
        ++m;
        a /= 2;
    }
    if(m % 2 == 0)
    return 1;
    return 0;
}
void binary_system_change(int x)
{
    int ch[15] = {0}, i = 0;
    if(x == 0)
    printf("0\n");
    while(x != 0)
    {  
    if(x % 2 == 1)
    ch[i] = 1;
    x /= 2;
    ++i;
    }
    for (int j = i - 1; j > -1; j--)
    printf("%d", ch[j]);
    printf("\n");
}


#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
   int n, m , ch[100000];
   while(~scanf("%d%d", &n, &m))
   {
   int sum = 0;
   for (int i = 0; i < n; i++)
   scanf("%d", &ch[i]);
   sort(ch,ch+n);
   for (int i = 0; i < m; i++)
   sum += ch[i];
   printf("%d\n", sum);
   } 
}

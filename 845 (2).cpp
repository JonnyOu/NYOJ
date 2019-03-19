#include<stdio.h>
int main()
{
	int x,y;
	int sum[100] = {0} , ch[100] = {0}, k = 0;
	while (scanf("%d%d", &x, &y),x || y)
	{
		if (sum[x]) sum[x] += y; 
		else
		{
			ch[++k] = x;
			sum[ch[k]] += y;
		}
	}
	for (int i = 1; i <= k; i++)
	printf("%d %d\n", ch[i], sum[ch[i]]); 
} 


//灵活利用两个数组储存数据
 

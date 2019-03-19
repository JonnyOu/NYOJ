#include<stdio.h>
const int N = 1000000; 
long long huiwen(long long x);
int ch[N + 1] = {0};
int main()
{
	long long i;
	for (i = 1; i <= N; i++)
	{	
		if(ch[i] == 0)
		{
		if(huiwen(i) && huiwen(i*i) && huiwen(i*i*i))
		ch[i] = 1;
    	} 
    }
	int n = 0;
	for (int i = 1; i <= N; i++)
	if(ch[i] == 1)
	{
		printf("%d ", i);
		++n;
		if(n % 5 == 0)
		printf("\n");
	}	
}

//当两个数的运算结果超出其类型范围，那么即使结果用更大范围的类型定义，程序也是错误的 
long long huiwen(long long x)
{
	int th[20], ph[20], k = 1;
	ph[0] = x % 10;
	while (x > 9)
	{ 
		x /= 10;
		ph[k] = x % 10;
		k++;
	}
	for (int i = 0; i < k; i++)
	th[i] = ph[k - 1 - i];
	for (int i = 0; i < k; i++)
	if(th[i] != ph[i])
	return 0;
	return 1;
}


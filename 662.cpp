#include<stdio.h>
int main()
{
	int n,sum;
	while (scanf("%d", &n), n != 0) {
		sum = 0;
		while (n > 2) {
			sum += n/3;//��������ˮ 
			n = n/3 + n%3;//��������ˮƿ+ʣ�µ���ˮƿ 
		}
		if (n == 2) sum++;
		printf("%d\n", sum);
	}
} 

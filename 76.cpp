#include<stdio.h>
int main() 
{
	int step[41] = {0,0,1,2};
	for (int i = 4; i <= 40; i++)
	step[i] = step[i-1] + step[i-2];//�ݹ�˼�룬�ӣ�i-1�����ͣ�i-2����̨���ж�Ӧ�ַ���̤��i��̨�� 
	int n;
	scanf("%d", &n);
	while (n--) {
		int m;
		scanf("%d", &m);
		printf("%d\n", step[m]);
	} 
} 

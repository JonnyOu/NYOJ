#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		if(!x || !y)
		puts("Signs can't be sure");
		else if (!(x+abs(x)) && !(y+abs(y)) || !(x-abs(x)) && !(y-abs(y)))//���þ���ֵ���� 
		puts("Signs are not opposot");//����ֵabs��������ͷ�ļ�Ϊstdlib.h 
		else
		puts("Signs are opposite");
	}
}


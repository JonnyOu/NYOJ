#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		if(!x || !y)
		puts("Signs can't be sure");
		else if (!(x+abs(x)) && !(y+abs(y)) || !(x-abs(x)) && !(y-abs(y)))//利用绝对值解题 
		puts("Signs are not opposot");//绝对值abs（）函数头文件为stdlib.h 
		else
		puts("Signs are opposite");
	}
}


//刷题日志：找到此版本漏洞，在while末尾无法输出ch【0】，题目提交成功且在其他版本正常运行 
//高效方法：利用四个不变元素确定东南西北 
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[4][6] = {"East","South","West","North"};
	char ph[5];
	int n,th[100],j;
	while (~scanf("%s %d", ph,&n)) {
		for (int i = 0; i < 4; i++)
		if (strcmp(ch[i],ph) == 0) 
		j = i;
		for (int i = 0; i < n; i++) { 
			scanf("%d", &th[i]);
			if (th[i] == 0) j--;
			else j++;
			if (j == -1)
			j = 3;
			j %= 4;
		}
		printf("%s\n", ch[j]);
	}
}

#include<stdio.h>
struct Student{
	char name[25];
	int x; //期末平均成绩 
    int y; //班级评议成绩
    char a; //学生干部
	char b; // 西部省份
	int z; // 发表论文数 
};
typedef struct Student Net;
int main()
{
	int n;
	Net ch[100];
	scanf("%d", &n);
	while (n--)
	{
	    int sum[100] = {0};
		int m;
		scanf("%d", &m);
	    getchar();
		for (int i = 0; i < m; i++)
		scanf("%s%d%d %c %c %d",  &ch[i].name, &ch[i].x, &ch[i].y, &ch[i].a, &ch[i].b, &ch[i].z);
		for (int i = 0; i < m; i++)
		{
			if (ch[i].x > 80 && ch[i].z > 0)
			sum[i] += 8000;
			if (ch[i].x > 85 && ch[i].y > 80)
			sum[i] += 4000;
			if (ch[i].x > 90)
			sum[i] += 2000;
			if (ch[i].x > 85 && ch[i].b == 'Y')
			sum[i] += 1000;
			if (ch[i].y > 80 && ch[i].a == 'Y')
			sum[i] += 850;
		}
		int max = sum[0], j = 0, s = 0;
		for (int i = 1; i < m; i++)
		if (max < sum[i])
		{
			max = sum[i];
			j = i;
		}
		printf("%s\n%d\n", ch[j].name, sum[j]);
		for (int i = 0; i < m; i++)
		s += sum[i];
		printf("%d\n", s);
	}
}

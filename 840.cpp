#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	char ch[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	scanf("%d", &n);
	while(n--)
	{
		int week[7];
		char ph[10];
		for(int i = 0; i < 7; i++)
		scanf("%d",&week[i]);
		getchar();
		sort(week,week+7);
		scanf("%s", ph);
		for (int i = 0; i < 7; i++)
		if(strcmp(ph,ch[i]) == 0)
		printf("%d\n", week[i]);
	}
}

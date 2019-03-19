#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int m;
		char ch[1000][6];
		scanf("%d", &m);getchar();
		char ph[6] = "zzzzz";
		for (int i = 0; i < m; i++)
		{
			scanf("%s", &ch[i]);
			getchar();
			if((ch[i][0] < ph[0]) ||
			  (ch[i][0] == ph[0] && ch[i][1] < ph[1]) ||
			  (ch[i][0] == ph[0] && ch[i][1] == ph[1] && ch[i][2] < ph[2])|| 
			  (ch[i][0] == ph[0] && ch[i][1] == ph[1] && ch[i][2] == ph[2] && ch[i][3] < ph[3])|| 
			  (ch[i][0] == ph[0] && ch[i][1] == ph[1] && ch[i][2] == ph[2] && ch[i][3] == ph[3] && ch[i][4] < ph[4]))
		{for (int j = 0; j < 5; j++)ph[j] = ch[i][j];}
		}
		printf("%s\n", ph);
    } 
} 

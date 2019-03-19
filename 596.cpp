#include<stdio.h>
int main()
{
	int n,ch[100][2];
	scanf("%d", &n);
	  while(n != 0)
	  {
	    for(int i = 0; i < n; i++)
	    scanf("%d%d", &ch[i][0], &ch[i][1]);
	    int max = ch[0][0] + ch[0][1];
	    for(int i = 0; i < n; i++)
	  {
	    if(max < ch[i][0] + ch[i][1])
	    max = ch[i][0] + ch[i][1];	
	  }
	printf("%d\n", max);
	scanf("%d", &n);
	}
	return 0;
}

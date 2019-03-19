#include<stdio.h>
#include<string.h>
#include<math.h>//如何统计字符串中个字符的个数？ 
void prime(int ph[]);
int main()
{
	int n, m;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		
		char ch[101], z;
		int ph[26] = {0}, j = 0;
		gets(ch);
		m = strlen(ch);
		for (int i = 0; i < m; i++)
		{   
          int a = ch[i] - 97;
     //     printf("%d ", a);   
          ph[a]++;
		}
	/*	for (int i = 0; i <= j; i++)
		printf("%d ", ph[i]);
		printf("\n");*/
		prime(ph);  
	}
}


void prime(int ph[])
{
	int min , max, s;

	for (int i = 0; i < 26; i++)
	if (ph[i] != 0)
	{
		min = ph[i];
	    break;
	}
	max = ph[0];
	for (int i = 1; i <= 25; i++)
	{
		if (min > ph[i] && ph[i] != 0)
		min = ph[i];
		if (max < ph[i])
		max = ph[i];
	}
//	printf("%d %d\n", max, min);
	s = max - min;
	int tag = 0;
	for (int i = 2; i <= sqrt(s); i++)
	{
		if (s % i == 0)
		tag = 1;
	}
	if (tag == 0 && s != 0 && s != 1)
      {
	      puts("Lucky Word");
          printf("%d\n", s);
	  }
    else
      {
		 puts("No Answer");
    	 puts("0");
      }
}

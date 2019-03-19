#include<stdio.h>
#include<math.h>
int prime(int m);
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
	int product;
		int m;
		scanf("%d", &m);
	    product = prime(m);
		printf("%d\n", product);
	  
	}
	return 0;
}

int prime(int m)
{
	int s = sqrt(m);
	int ch[1001] = {0};
	  for(int i = 2; i <= s; i++)
	    if(ch[i] == 0)
	  for(int k = i * i; k <= m; k += i)
	    ch[k] = 1;
	  int product = 1;
	  for(int i = 2; i <= m ; i++)
    	  if(ch[i] == 0)
    	  product = product * i % 1000000;
    	return product; 
}


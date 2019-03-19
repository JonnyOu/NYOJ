#include<stdio.h>
#include<math.h>
int circulation(int s);
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int m,s = 0,x = 1;
		scanf("%d", &m);
		s = circulation(m);
		while(s != m)
		{
			x++;
			m = s;
			s = circulation(s);
		}	
		printf("%d\n", x);
    }
	return 0;
}

int circulation(int s)
{
     int a[4],b[4];
     for(int i = 0; i < 4; i++)
     {
     	a[i] = b[i] = s % 10;
     	s /= 10;
     }  
	
     for(int i = 0; i < 4; i++)
     {
     	int max = a[i],
     	    x = i;
     	for(int j = i; j < 4; j++)
		{
     	   if(max < a[j])
		{
           max = a[j];
           x = j;
     	}
     	}
		 a[x] = a[i];
         a[i] = max;   
     }
     
	for(int i = 0; i < 4; i++)
     {
     	int min = b[i],
     	    y = i;
     	for(int j = i; j < 4; j++)
		{
     	   if(min > b[j])
		{
           min = b[j];
           y = j;
     	}
     	}
		 b[y] = b[i];
         b[i] = min;   
     }
     
     
     int s1 = 0, s2 = 0;
     for(int i = 0; i < 4; i++)
     {
     	s1 += a[i] * pow(10,3-i);
     	s2 += b[i] * pow(10,3-i);
     }  
     int k = s1 - s2;
     return k;
}


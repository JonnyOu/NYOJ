#include<stdio.h>
#include<algorithm>
using namespace std; 
int main()
{
	int n,s,ch[101];
	while (scanf("%d", &n), n != 0) {
		for (int i = 0; i < n; i++)
		scanf("%d", &ch[i]);
		sort(ch,ch+n);
		n = n/2 + 1;//n /= 2 + 1 Ïàµ±ÓÚn/3
		s = 0;
		for (int i = 0; i < n; i++)
		s += ch[i]/2 + 1;
		printf("%d\n", s);
	}
} 

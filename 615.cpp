#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main() 
{
	int n, ch[1000],ph[1000], min;
	while (~scanf("%d", &n)) {
		int j = 0; 
		for (int i = 0; i < n; i++)
		scanf("%d", &ch[i]);
		sort(ch,ch+n);
		for (int j = 0; j < n-1; j++)
		ph[j] = abs(ch[j] - ch[j+1]);//可以如此表示 
		min = ph[0];
		for (int i = 0; i < n-1; i++)
		if (min > ph[i]) {
			min = ph[i];
			j = i;
		}
		printf("%d %d\n", ch[j], ch[j+1]);
	}
} 

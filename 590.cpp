#include<stdio.h>
int main()
{
	int n,m,k,s,ch[100000];
	while (~scanf("%d%d", &n,&m)) {
		s = 0;
		for (int i = 0; i < n; i++)
		scanf("%d", &ch[i]);
        for (int i = 0; i < n-1; i++) {
        	k = 0;
        	for (int j = i; j < n; j++) {
        		k += ch[j];
        		if (k == m) {
        			s++;
        			break;
        		}
        		if (k > m)//减少不必要的循环 
        		break;
        	}        	
        }
		printf("%d\n", s);
	}
} 
//串可为任意长度 
//s=0要放在循环里，否则一次循环出来，s不会重新赋值 

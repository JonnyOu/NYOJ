#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1001];
    while (gets(ch)) {
   	int m = strlen(ch);
	for (int i = 0; i < m; i++) {
	    if (ch[i] == 'y' && ch[i+1] == 'o' && ch[i+2] == 'u') {
	    	ch[i] = 'w';
	    	ch[i+1] = 'e';
	    	for (int j = i+2; j < m-1; j++)
	    	ch[j] = ch[j+1];
	    	ch[m-1] = '\t';//擦写最后一个字符为空格，
	    }           	  //32为空格的ascll码 
	}                     //\t 
	puts(ch);             //直接空格 
    }
} 

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
	    	ch[m-1] = '\t';//��д���һ���ַ�Ϊ�ո�
	    }           	  //32Ϊ�ո��ascll�� 
	}                     //\t 
	puts(ch);             //ֱ�ӿո� 
    }
} 

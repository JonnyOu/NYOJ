//217.a letter and a number
#include<stdio.h>
int main()    
{
	int n; 
	scanf("%d", &n);
	getchar();
	while (n--) {
		char c;
		int m, count;
        scanf("%c", &c);
        if (c >= 'A' && c <= 'Z') 
       	    count = c - 'A' + 1;
       	if (c >= 'a' && c <= 'z')
       	    count = 'a' - c - 1;
		scanf("%d", &m);
		getchar();
		printf("%d\n", count + m); 
	} 
} 

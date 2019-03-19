#include<stdio.h>
#include<string.h>
int main() //ascll码大小写字母不连续 
{
	char a[15];
	while(gets(a))
	{
		int tag = 1;
		if(a[0] < '0' || a[0] > '9')
		{
			for (int i = 0; i < strlen(a); i++)
			{
				if(a[i] == '_' ||
				   a[i] >= '0' && a[i] <= '9' ||
				   a[i] >= 'A' && a[i] <= 'Z' ||
				   a[i] >= 'a' && a[i] <= 'z')
				   continue;
				else
				{
					tag = 0; break;
				} 
			}
	    }
	    else tag = 0;
		if(tag == 1) printf("Yes\n"); 
	    else printf("No\n");
	} 
}


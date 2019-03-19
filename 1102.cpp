#include<stdio.h>
int main() {
	int n;
	while(~scanf("%d", &n)) {
		if((n - 2) % 4 == 0)
	    printf("Yes\n");
	  else
 	    printf("No\n");
	}
	return 0;
}

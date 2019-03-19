#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int m, sum = 0, k;
		
		scanf("%d", &m);
		
		for (int i = 0; i <= 10*m; i++) {
			for (int j = 0; j <= 5*m; j++) {
				if (i+j*2 <= 10*m) {//¼ôÖ¦·¨ 
					k = (10*m-2*j-i)/5;
						if (i+2*j+5*k == 10*m)
							++sum; 	
				}	
			}	
		}
		printf("%d\n", sum);
	}
} 

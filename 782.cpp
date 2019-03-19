#include<stdio.h>
int main() {
	int n, m, p, m1;
	
	while (~scanf("%d%d%d", &n, &m, &p)) {
		m1 = m;
		for (int i = 1; i < p; i++) 
			m = m * m1 % 7;
		if ((m+n)%7 == 0) printf("7\n");
		else 
			printf("%d\n", (m+n)%7); 
	}
}

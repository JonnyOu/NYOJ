#include<stdio.h>
int main() {
	int n, note;
	double s;
	while (scanf("%d", &n), n != 0) {
		s = n;
		note = n;
		for (int i = 2; i < 2*note; i+=2) {
			s += i*(1/(double)n);
			n--;
		}  
		printf("%.2lf\n", s);
	}
}

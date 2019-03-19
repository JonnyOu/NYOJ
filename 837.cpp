//Íþ×ô·ò²©ÞÈ¹«Ê½  a[i]=(int)(i*(1+sqrt(5.0))/2);  
#include<cstdio>
#include<cmath>
using namespace std;
const int N = 100000;
int a[N+5], b[N+5];

void Wythoff() {
	for (int i = 1; i <= N; i++) {
		a[i] = (int)(i*(1+sqrt(5.0))/2);
		b[i] = a[i]+i; 
	}
}

int main() {
	Wythoff();
	int n;
	while (~scanf("%d", &n)) {
		for (int i = 0; i <= n; i++) 
			printf("(%d,%d)", a[i], b[i]);
		printf("\n");
	}
	return 0;
} 

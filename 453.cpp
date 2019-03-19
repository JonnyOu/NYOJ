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
	int T, n;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		printf("%d %d", a[n], b[n]);
	}
	return 0;
} 

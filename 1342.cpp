#include<stdio.h>
#define maxn 30
long long f[maxn];
void F() {
	f[0] = 1; f[1] = 2;
	for (int i = 2; i < maxn; i++) 
		f[i] = f[i-1]+f[i-2];
}
int main() {
	F();
	int n;
	while (~scanf("%d", &n)) 
		printf("%d\n", f[n-1]);
	return 0;
}                                                                                                            

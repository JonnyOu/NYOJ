//¿¨ÌØÀ¼Êý 
#include<cstdio>
using namespace std;
const int m = 20;
long long a[m];
void Catalan(long long *a) {
	int t;
	a[0] = 1; a[1] = 1; a[2] = 2; 
	for (int i = 3; i <= 16; i++) {
		a[i] = 0;
		t = i-1;
		for (int j = 0; j < i; j++)
			a[i] += a[j]*a[t--];
	}
}

int main() {
	Catalan(a);
	int T, k = 1;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		printf("Case #%d : %lld\n", k, a[n-2]);
		k++;
	}
	return 0;
}

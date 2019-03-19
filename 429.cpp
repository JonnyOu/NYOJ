#include<cstdio>
using namespace std;
const int N = 55;
long long a[N];

void Fai() {
	a[1] = 1; a[2] = 2;
	for (int i = 3; i <= 50; i++) 
		a[i] = a[i-1] + a[i-2];
}

int main() {
	Fai();
	long long n;
	while(~scanf("%lld", &n)) {
		printf("%lld\n", a[n]);
	}
	return 0;
}

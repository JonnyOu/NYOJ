#include<cstdio>
#include<cmath>
using namespace std;
const int N = 35;
int a[N];

void Fai() {
	a[1] = 3; a[2] = 7;
	for (int i = 3; i < 30; i++) 
		a[i] = a[i-1] + a[i-2];
}

bool Prime(int n) {
	int t = sqrt(n);
	for (int i = 2; i <= t; i++) 
		if (n % i == 0) return false;
	return true;
}

int main() {
	Fai();
	int n;
	while (scanf("%d", &n), n != -1) {
		if (Prime(a[n])) printf("Yes\n");
		else printf("No\n");
 }
}

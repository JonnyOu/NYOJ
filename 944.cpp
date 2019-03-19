/*
nyoj 944

*/
#include<cstdio>
#include<cstring>
using namespace std;
const int MaxSize = 1000005;
int a[MaxSize];
void Prime() {
	memset(a, 0, sizeof(a));
	a[0] = 1; a[1] = 1;
	for (int i = 2; i*i <= MaxSize; i++) {
		if (a[i] == 0) {
			for (int j = 2*i; j <= MaxSize; j+=i) 
			a[j] = 1;
		}
	}
}

int main() {
	Prime();
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			printf("6\n");
			continue;
		}
		for (;;) {
			if (a[n] == 0) break;
			n++;
		}
		printf("%d\n", n);
	}
	return 0;
}


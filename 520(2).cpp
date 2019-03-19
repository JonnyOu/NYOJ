#include<cstdio>
using namespace std;
const int MaxSize = 1000001;

int a[MaxSize] = {0};

void prime() {
	int i, j, k = 0;
	for (i = 2; i < MaxSize; i++) {
		if (a[i] == 0) {
			k++;
			for (j = i; j < MaxSize; j += i) 
				a[j] = k;
		}
	}
}

int main() {
	prime();
	int n;
	while (~scanf("%d", &n)) {
		printf("%d\n", a[n]);
	}
	return 0;
}

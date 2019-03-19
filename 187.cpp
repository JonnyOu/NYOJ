#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
const int MaxSize = 2000001;

int a[MaxSize];

//素数筛选，爱拉托逊斯筛选法 
void isPrime() {
	int m = sqrt(double(MaxSize+0.5));
	for (int i = 2; i <= m; i++) {
		if (!a[i]) {
			for (int j = i*i; j < MaxSize; j += i) 
				a[j] = 1;
		}
	}
}

int main() {
	isPrime();
	int n;
	while (~scanf("%d", &n)) {
		for (int i = 2; i <= n; i++)
			if (a[i] != 1) printf("%d ", i);
		printf("\n");
	}
	return 0;
}

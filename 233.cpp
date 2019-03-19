#include<cstdio>
using namespace std;

int Sort(int *a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			if (a[j] < a[j-1]) {
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
				sum++;
			} 
		}
	}
	return sum;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		printf("%d\n", Sort(a, n));
	}
	return 0;
} 

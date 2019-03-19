#include<cstdio>
using namespace std;

bool coprimes(int n, int m) {
	int t;
	while (n%m) {
		t = n%m;
		n = m;
		m = t;
	}
	if (m != 1) return false;
	else return true;
}

int main() {
	int n, sum;
	while (~scanf("%d", &n)) {
		sum = 1;
		for (int i = 2; i < n; i++) 
			if (coprimes(n, i)) sum++;
		printf("%d\n", sum);
	}
	return 0;
}

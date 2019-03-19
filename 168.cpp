#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

typedef struct {
	int n;
	int in;
	int out;
}Node;

bool cmp1(Node a, Node b) {
	return a.in < b.in;
}

bool cmp2(Node a, Node b) {
	return a.out+a.in < b.out+b.in;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, sum = 0, j = 0, t;
		scanf("%d", &n);
		Node a[n], b[n];
		for (int i = 0; i < n; i++) {
			scanf("%d%d%d", &a[i].n, &a[i].in, &a[i].out);
			b[i].n = a[i].n; b[i].in = a[i].in; b[i].out = a[i].out;
		}
		sort(a, a+n, cmp1);
		sort(b, b+n, cmp2);
		t = 0;
		sum += a[0].n;
		for (int i = 1; i < n; i++) {
			while (a[i].in >= b[j].in+b[j].out) {
				t += b[j].n;
				j++;
			}
			if (t > a[i].n) t -= a[i].n;
			else {
				sum += a[i].n - t;
				t = 0;
			}
		}		
		printf("%d\n", sum);
	}
	return 0;
}

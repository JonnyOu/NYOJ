#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int v;
	int w;
}Node; 

bool cmp(Node a, Node b) {
	return a.v > b.v;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int s, m, sum = 0;
		scanf("%d%d", &s, &m);
		Node a[s];
		for (int i = 0; i < s; i++) 
			scanf("%d%d", &a[i].v, &a[i].w);
		sort(a, a+s, cmp);
		int j = 0;
		for (;;) {
			if (m == 0 || j == s) break;
			for (int i = 1; i <= a[j].w; i++) {
				if (m != 0) {
					sum += a[j].v;
					m--;
				}
				else break;
			}
			j++;
		}
		printf("%d\n", sum);
	}
	return 0;
}

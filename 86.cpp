#include<set>
#include<cstdio>
using namespace std;

int main() {
	int m, n, t;
	set<int> a;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		a.insert(t);
	}
	set<int>::iterator iter;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (a.count(t)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

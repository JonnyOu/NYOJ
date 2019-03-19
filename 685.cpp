#include<string>
#include<map>
#include<cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		char s[20];
		map<string, int> a;
		scanf("%d%d", &n, &m);
		getchar();
		for (int i = 0; i < n; i++) {
			gets(s);
			if (!a.count(s)) a[s] = 1;
			else a[s]++;
		}
		for (int i = 0; i < m; i++) {
			gets(s);
			printf("%d\n", a[s]);
		}
	}
	return 0;
}

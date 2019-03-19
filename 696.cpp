#include<cstdio>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		string s;
		map<string, int>a;
		int n, k, sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			cin >> s >> k;
			if (a.count(s)) {
				if (a[s] < k) { sum++; a[s] = k; }
			}
			else { a[s] = k; }
		}
		printf("%d\n", sum);
	}
	return 0;
}

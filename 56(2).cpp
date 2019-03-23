#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m, cnt = 0;
		cin >> n >> m;
		for (int i = m; i <= n; i++) {
			int t = i;
			while (!(t%m)) {
				cnt++;
				t /= m;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

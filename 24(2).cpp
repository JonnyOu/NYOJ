#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000005;

int a[maxn];
void prime();

int main() {
	prime();
	int T;
	cin >> T;
	while (T--) {
		int n, l, r;
		cin >> n;
		l = r = n;
		while (a[l] && a[r]) {
			l--; r++;
		}
		int t;
		if (!a[l]) t = l;
		else t = r;
		cout << t << ' ' << r-n << endl;
	}
	return 0;
}

void prime() {
	a[1] = 1; a[0] = 1;
	for (int i = 2; i < maxn/2; i++) {
		if (!a[i]) {
			for (int j = 2; j*i < maxn; j++)
				a[i*j] = 1;
		}
	}
}

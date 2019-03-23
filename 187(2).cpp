#include <bits/stdc++.h>
using namespace std;
const int maxn = 2000001;

int prime[maxn];
void is_prime();

int main() {
	is_prime();
	int n;
	while (cin >> n && n) {
		for (int i = 2; i <= n; i++)
			if (!prime[i]) cout << i << ' ';
		cout << endl;
	}
	return 0;
}

//素数筛选，爱拉托逊斯筛选法
void is_prime() {
	prime[1] = 1;
	for (int i = 2; i <= 1414; i++) {
		if (!prime[i]) {
			for (int j = i*i; j < maxn; j += i)
				prime[j] = 1;
		}
	}
}


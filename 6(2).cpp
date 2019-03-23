#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		double a[n], sum = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int i;
		for (i = n-1; i >= 0; i--) {
			if (sum >= 20) break;
			sum += (2*sqrt(pow(a[i],2)-1));
		}
		cout << n-i-1 << endl;
	}
	return 0;
}

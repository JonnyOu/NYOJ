#include<cstdio>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, note, max = 0;
		map<int, int> a;
		scanf("%d", &n);
		int b[n];
		for (int i = 0; i < n; i++) cin >> b[i];
		sort(b, b+n);
		for (int i = 0; i < n; i++) a[b[i]]++;
		for (int i = 0; i < n; i++) {
			if (max < a[b[i]]) {
				max = a[b[i]];
				note = b[i];
			}
		}	
		cout << note << endl;
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		memset(a, 0, sizeof(a));
		for (int i = 1; i < s.size(); i++)
			for (int j = 0; j < i; j++)
				if (s[i] > s[j])
					a[i] = max(a[i], a[j]+1);
		int m = 0;
		for (int i = 0; i < s.size(); i++)
			if (m < a[i]) m = a[i];
		cout << m+1 << endl;
	}
	return 0;
}


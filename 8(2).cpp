#include <bits/stdc++.h>
using namespace std;

struct node {
	int num;
	int l;
	int w;
};
typedef struct node Node;

bool cmp(Node a, Node b);

int main() {
	int T;
	cin >> T;
	while (T--) {
		vector<Node> v;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			Node t;
			int a, b;
			cin >> t.num >> a >> b;
			if (a > b) {t.l = a; t.w = b;}
			else {t.l = b; t.w = a;}
			bool ok = false;
			for (int j = 0; j < v.size(); j++) {
				if (v[j].num == t.num && v[j].l == t.l && v[j].w == t.w) {
					ok = true;
					break;
				}
			}
			if (ok == false) v.push_back(t);
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < v.size(); i++)
			cout << v[i].num << ' ' << v[i].l << ' ' << v[i].w << endl;
	}

	return 0;
}

bool cmp(Node a, Node b) {
	if (a.num != b.num)
		return a.num < b.num;
	else if (a.l != b.l)
		return a.l < b.l;
	else
		return a.w < b.w;
}

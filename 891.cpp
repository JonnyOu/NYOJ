 #include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int left;
	int right;
}Node;

bool cmp(Node a, Node b) {
	return a.left < b.left;
}

int main() {
	Node a[105];
	int n, left, right, sum, note;
	while (~scanf("%d", &n)) {
		for (int i = 0; i < n; i++) scanf("%d%d", &a[i].left, &a[i].right);
		sort(a, a+n, cmp);
		sum = 1;	note = a[0].right;
		for (int i = 1; i < n; i++) {
			if (a[i].left > note) {
				sum++;
				note = a[i].right;
			}
			else {
				note = min(a[i].right, note); //取交区间 
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}

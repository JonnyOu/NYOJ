/*
8.
解题思路:
1.创建结构体记录 编号，长，宽 
2.按规定排序 
*/

#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int n;
	int length;
	int wide;
}Node;

bool cmp(Node a, Node b) {
	if (a.n == b.n && a.length == b.length) return a.wide < b.wide;
	if (a.n == b.n) return a.length < b.length;
	return a.n < b.n;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, t, length, wide, note = 0;
		bool flag;
		scanf("%d", &n);
		Node a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d%d%d", &t, &length, &wide);
			if (length < wide) {
				int temp = length;
				length = wide;
				wide = temp;
			}
			flag = false;
			for (int i = 0; i < note; i++) {
				if (t == a[i].n && length == a[i].length && wide == a[i].wide) {
					flag = true;
					break;
				}
			}
			if (flag == false) {
				a[note].n = t; a[note].length = length; a[note].wide = wide;
				note++;
			}
		}
		sort(a, a+note, cmp);
		for (int i = 0; i < note; i++) 
			printf("%d %d %d\n", a[i].n, a[i].length, a[i].wide);
	}
	return 0;
}

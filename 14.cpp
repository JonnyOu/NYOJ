/*
14.
思路：找出最早完成的活动，在此活动结束的时间后，找出第二个最快完成的活动
以此类推 
*/

#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int begin;
	int end;
} Node; 

bool cmp_1(Node a, Node b) {
	return a.begin < b.begin;
}

bool cmp_2(Node a, Node b) {
	return a.end < b.end;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, sum = 1, t = 0;
		scanf("%d", &n);
		Node a[n];
		for (int i = 0; i < n; i++)
			scanf("%d%d", &a[i].begin, &a[i].end);
		sort(a, a+n, cmp_2);
		for (int i = 1; i < n; i++) {
			if (a[i].begin > a[t].end) {
				t = i; sum++;
			}
		} 
		printf("%d\n", sum);
	}
	return 0;
}

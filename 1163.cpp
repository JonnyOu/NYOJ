#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int num;
	int note;
}Node;

bool cmp(Node a, Node b) {
	if (a.num == b.num) return a.note < b.note;
	return a.num < b.num;
} 

void Paixu(Node *a, int n) {
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++) {
			if (a[i].num >= a[j].num) {
				Node temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		Node a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i].num);
			a[i].note = i;
		}
		sort(a, a+n, cmp);
//		Paixu(a, n);
		for (int i = 0; i < n; i++) 
			printf("%d ", a[i].note);
		printf("\n");
	}
	return 0;
}
 

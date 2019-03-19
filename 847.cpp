#include<cstdio>
using namespace std;

typedef struct {
	int num;
	int note;
}Node;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		int a[n];
		Node b[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		b[n-1].num = a[n-1];
		b[n-1].note = n-1;
		//存储a[i]及后面的数的最小值，并记录最小值的位置 
		for (int i = n-2; i > 0; i--) {
			if (a[i] < b[i+1].num) {
				b[i].num = a[i];
				b[i].note = i;
			}
			else {
				b[i].num = b[i+1].num;
				b[i].note = b[i+1].note;
			}
		}
		int x = 0, sum = a[x]-b[x+1].num, y = b[x+1].note;
		for (int i = 1; i < n-1; i++) {
			if (sum < a[i]-b[i+1].num) {
				x = i;
				y = b[i+1].note;
				sum = a[i]-b[i+1].num;
			}
		}
		printf("%d %d %d\n", sum, x+1, y+1);
	}
	return 0;
} 

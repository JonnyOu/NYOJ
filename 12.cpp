/*
1.如果2*r < h,这个装置相当于不存在 
2.将每个有用的装置覆盖的范围用横坐标表示
3.草坪长度当然也用横坐标表示
4.将每个喷水装置的覆盖范围拼接起来，完全覆盖住草坪即可
5.从覆盖范围最广的喷水装置开始，向左右两边扩增，求出最少的喷水装置数 
*/

#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

typedef struct {
	double left, right;
}Node;

bool cmp(Node a, Node b) {
	return a.left < b.left;
}

bool cmp2(Node a, Node b) {
	return a.right < b.right;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, w, h, t = 0;
		bool flag;
		double x, r;
		scanf("%d%d%d", &n, &w, &h);
		Node a[n];
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf", &x, &r);
			if (2*r <= h) continue;
			a[t].left = x - sqrt((r*r)-(h/2)*(h/2)); 
			if (a[t].left < 0) a[t].left = 0; 	
			a[t].right = x + sqrt((r*r)-(h/2)*(h/2));
			if (a[t].right > w) a[t].right = w;
			t++; 
		}
		
	}
	return 0;
}


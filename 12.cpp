/*
1.���2*r < h,���װ���൱�ڲ����� 
2.��ÿ�����õ�װ�ø��ǵķ�Χ�ú������ʾ
3.��ƺ���ȵ�ȻҲ�ú������ʾ
4.��ÿ����ˮװ�õĸ��Ƿ�Χƴ����������ȫ����ס��ƺ����
5.�Ӹ��Ƿ�Χ������ˮװ�ÿ�ʼ������������������������ٵ���ˮװ���� 
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


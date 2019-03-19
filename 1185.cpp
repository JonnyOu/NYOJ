//#include<cstdio>
//using namespace std;
////寻找最大值 
//int Max(int *a, int L, int R) {
//	int max = 0, note = 0;
//	for (int i = L-1; i <= R-1; i++) {
//		if (max < a[i]) {
//			max = a[i];
//			note = i;
//		}
//	}
//	return note;
//}
////寻找最小值 
//int Min(int *a, int L, int R) {
//	int min = 0, note = 0;
//	for (int i = L-1; i <= R-1; i++) {
//		if (min > a[i]) {
//			min = a[i];
//			note = i;
//		}
//	}
//	return note;
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int N,M,C,L,R,max,min;
//		scanf("%d", &N);
//		int a[N];
//		for (int i = 0; i < N; i++) scanf("%d", &a[i]);
//		max = Max(a,0,N-1); min = Min(a,0,N-1);
//		scanf("%d", &M);
//		for (int i = 0; i < M; i++) {
//			scanf("%d%d%d", &C, &L, &R);
//			if (C == 1) {
//				if (min >= L && min <= R) printf("%d\n", a[min]);
//				else printf("%d\n", a[Min(a,L,R)]);
//			}
//			else if (C == 2) {
//				if (max >= L && max <= R) printf("%d\n", a[max]);
//				else printf("%d\n", a[Max(a,L,R)]);
//			}
//			else if (C == 3) printf("%d\n", a[Min(a,L,R)]+a[Max(a,L,R)]); 
//		}
//	}
//}



/*
解题思路:
以上方法超时，改用结构体排序 
*/

#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct {
	int num;
	int note;
}Node;

bool cmp(Node a, Node b) {
	return a.num < b.num;
}

int Answer_1(Node *a, int L, int R, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i].note >= (L-1) && a[i].note <= (R-1)) 
			return a[i].num;
	}
}

int Answer_2(Node *a, int L, int R, int n) {
	for (int i = n-1; i >= 0; i--) {
		if (a[i].note >= (L-1) && a[i].note <= (R-1)) 
			return a[i].num;
	}	
}

int Answer_3(Node *a, int L, int R, int n) {	
	return Answer_1(a, L, R, n)+Answer_2(a, L, R, n);
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m, C, L, R;
		scanf("%d", &n);
		Node a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i].num);
			a[i].note = i;
		}
		sort(a, a+n, cmp);
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d%d%d", &C, &L, &R);
			if (C == 1) {
				printf("%d\n", Answer_1(a, L, R, n));
			}
			else if (C == 2) {
				printf("%d\n", Answer_2(a, L, R, n));
			}
			else {
				printf("%d\n", Answer_3(a, L, R, n));
			}
		}
	}
	return 0;
}


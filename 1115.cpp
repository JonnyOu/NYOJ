/*
nyoj 1115

*/
#include<iostream>
#include<algorithm>
using namespace std;
const int MaxSize = 1005;

typedef struct {
	int x, y;
}Node;

Node a[MaxSize];

bool cmp(Node a, Node b) {
	if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}

int F_1(int i) {
	int t = a[i].y;
	if (t < a[i+1].y) t = a[i+1].y;
	if (t < a[i+2].y) t = a[i+2].y;
	return t;
}

int F_2(int i) {
	int t = a[i].y;
	if (t > a[i+1].y) t = a[i+1].y;
	if (t > a[i+2].y) t = a[i+2].y;
	return t;
}

int main() {
	int T, max, t;
	while (cin >> T) {
		max = 0;
		for (int i = 0; i < T; i++) 
			cin >> a[i].x >> a[i].y;
		sort(a, a+T, cmp);
		for (int i = 0; i <= T-3; i+=3) {
			if (i % 2 == 0) t = F_1(i);
			else t = F_2(i);
			if (max < t) max = t;
		}
		cout << max << endl;
	}
	return 0;
}

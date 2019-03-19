/*
737.
优先队列
队列中数值越小的数优先级越高 
priority queue<int, vector<int>, greater<int> > pq

条件看少
题目要求相邻
每次找出队列中相邻两个元素的和的最小值，合并后保留其中一堆，另一堆消掉
注意:首尾相邻 
*/ 

#include<cstdio>
#include<queue>
#include<climits>
using namespace std;

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[n], sum = 0, t, min;
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (;;) {
			if (n == 1) break;
			min = INT_MAX; t = 0;		
			for (int i = 0; i < n; i++) {
				if (a[i]+a[(i+1)%n]<min) {
					min = a[i]+a[(i+1)%n];
					t = i;
				}
			}
			a[t] = min;
			sum += a[t];
			for (int i = (t+1)%n; i < n-1; i++) 
				a[i] = a[i+1];
			n--;
		}
		printf("%d\n", sum);
	}
	return 0;
}

/*
737.
���ȶ���
��������ֵԽС�������ȼ�Խ�� 
priority queue<int, vector<int>, greater<int> > pq

��������
��ĿҪ������
ÿ���ҳ���������������Ԫ�صĺ͵���Сֵ���ϲ���������һ�ѣ���һ������
ע��:��β���� 
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

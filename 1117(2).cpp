#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
const int size = 100000;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, a[size], front, rear, sum;
		front = 0; rear = 0;
		string s;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			cin >> s;
			if (s == "pop") front++;
			else {
				scanf("%d", &sum);
				a[rear++] = sum;
			}
		}
		if (front == rear) printf("no eggs!\n");
		else {
			for (int i = front; i < rear; i++)
				printf("%d ", a[i]);
			printf("\n");
		}
	}
	return 0;
}
/*
2
3
push 1
push 2
push 3
push 13
2
push 1
pop
*/

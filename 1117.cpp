#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int size = 30;

typedef struct {
	int a[size];
	int front, rear;
} Queue;

//入队操作 
void Push(Queue *q, int x) {
	q->rear = (q->rear+1)%size;
	q->a[q->rear] = x;
}

//出队操作 
void Pop(Queue *q) {
	q->front = (q->front+1)%size;
}

//判空操作 
bool Empty(Queue *q) {
	if (q->front == q->rear) return true;
	return false;
}

//判满操作
bool Full(Queue *q) {
	if ((q->rear+1)%size == q->front) return true;
	return false;
} 

//遍历操作 
void Print(Queue *q) {
	while (!Empty(q)) {
		q->front = (q->front+1)%size;
		printf("%d ", q->a[q->front]);
	}
	printf("\n");
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		Queue q;
		q.front = q.rear = size-1;
		int n, sum;
		scanf("%d", &n);
		getchar();
		while (n--) {
			string s;
			cin >> s;
			if (s == "pop") Pop(&q);
			else {
				scanf("%d", &sum);
				Push(&q, sum);
			}
		}
		if (Empty(&q)) printf("no eggs!\n");
		else Print(&q);
	}
	return 0;
}



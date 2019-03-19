#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int size = 30;

typedef struct {
	int a[size];
	int front, rear;
} Queue;

//��Ӳ��� 
void Push(Queue *q, int x) {
	q->rear = (q->rear+1)%size;
	q->a[q->rear] = x;
}

//���Ӳ��� 
void Pop(Queue *q) {
	q->front = (q->front+1)%size;
}

//�пղ��� 
bool Empty(Queue *q) {
	if (q->front == q->rear) return true;
	return false;
}

//��������
bool Full(Queue *q) {
	if ((q->rear+1)%size == q->front) return true;
	return false;
} 

//�������� 
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



/**
*约瑟夫环问题 
*/
#include<stdio.h>
#include<malloc.h>
typedef struct Node{
	int data;
	struct Node *next;
} Node; 
//创建循环链表 
Node *Creat(int n);
//打印出环顺序 
void Joseph(Node *rear, int m);

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int m, x;
		Node *rear = NULL;
		scanf("%d%d", &m, &x);
		rear = Creat(m);
		Joseph(rear, x);
	}
	return 0;
}

Node *Creat(int n) {
	Node *rear = NULL, *s;
	int i;
	rear = (Node *)malloc(sizeof(Node));
	rear->data = 1;
	rear->next = rear;
	for (int i = 2; i <= n; i++) {
		s = (Node *)malloc(sizeof(Node));
		s->data = i;
		//将结点s插入rear的后面 
		s->next = rear->next;
		rear->next = s;
		//rear指向尾结点
		rear = s; 
	}
	return rear;
}

void Joseph(Node *rear, int m) {
	//初始化工作指针
	Node *pre = rear, *p = rear->next;
	int count = 1;
	while (p->next != p) {
		//累加器没有达到m，工作指针后移 
		if (count < m) {
			pre = p;
			p = p->next; 
			count++;
		}
		else { 
			pre->next = p->next;
			free(p);
			p = pre->next;
			count = 1;
		}
	} 
	printf("%d\n", p->data);
	free(p);
}






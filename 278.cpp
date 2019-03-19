/**
*Լɪ������ 
*/
#include<stdio.h>
#include<malloc.h>
typedef struct Node{
	int data;
	struct Node *next;
} Node; 
//����ѭ������ 
Node *Creat(int n);
//��ӡ����˳�� 
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
		//�����s����rear�ĺ��� 
		s->next = rear->next;
		rear->next = s;
		//rearָ��β���
		rear = s; 
	}
	return rear;
}

void Joseph(Node *rear, int m) {
	//��ʼ������ָ��
	Node *pre = rear, *p = rear->next;
	int count = 1;
	while (p->next != p) {
		//�ۼ���û�дﵽm������ָ����� 
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






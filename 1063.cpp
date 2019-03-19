/*
nyoj 1063
����˼·:
1.���������� 
2.�ݹ�������������������ݴ洢�������� 
*/

#include<iostream>
using namespace std;
const int MaxSize = 100;
char vertex[MaxSize];
int k, t;
typedef struct Node{
	char data;
	Node *rchild, *lchild;
}Node;

//����������
Node *createBiTree(Node *root) {
	char c;
	cin >> c;
	if (c == '#') root = NULL;
	else {
		root = new Node;
		root->data = c;
		root->lchild = createBiTree(root->rchild);
		root->rchild = createBiTree(root->lchild);
	}
	return root;
} 

//����������
void PreOrder(Node *root, int i) {
	if (root == NULL) return ;
	else {
		if (i == k) vertex[t++] = root->data;
		PreOrder(root->lchild, i+1);
		PreOrder(root->rchild, i+1);
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		Node *root;
		root = createBiTree(root);
		char ch;
		cin >> ch >> k;
		t = 0;
		PreOrder(root, 1);
		for (int i = 0; i < t-1; i++) 
			cout << vertex[i] << '~';
		cout << vertex[t-1] << endl;
	}
	return 0;
}

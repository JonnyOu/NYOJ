/*
nyoj 202
分析: 经过实验，旋转后中序遍历没有改变，原因有待考究 
*/

#include<iostream>
using namespace std;
const int maxSize = 15;

struct Node{
	int data;
	int leftChild, rightChild; 
}tree[maxSize];

void inOrder(int root) {
	if (root != -1) {
		inOrder(tree[root].leftChild);
		cout << tree[root].data << endl; 
		inOrder(tree[root].rightChild);
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,root,m,a,b;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> root; 
			tree[root].data = root;
			cin >> tree[root].leftChild >> tree[root].rightChild;
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
		}
		inOrder(0); //根结点 
	}
	return 0;
}

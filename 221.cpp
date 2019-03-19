/*
nyoj 221
已知二叉树的前序和中序遍历，求后序遍历 
前序: preorder
中序: inorder
后序: aftorder 
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

struct TreeNode {
	char data;
	struct TreeNode *l_child, *r_child;
};

void Aftorder(char *preorder, char *inorder, int length) {
	if (length == 0) return ;
	TreeNode* node = new TreeNode;
	node->data = *preorder;
	int rootIndex = 0;
	for (; rootIndex < length; rootIndex++) 
		if (inorder[rootIndex] == *preorder) 
			break;
	Aftorder(preorder+1, inorder, rootIndex);
	Aftorder(preorder+rootIndex+1, inorder+rootIndex+1, length-rootIndex-1);
	printf("%c", node->data);
}

int main() {
	char a[100], b[100];
	int length;
	while (~scanf("%s%s", a, b)) {
		length = strlen(a);
		Aftorder(a, b, length);
		printf("\n");
	}
	return 0;
}

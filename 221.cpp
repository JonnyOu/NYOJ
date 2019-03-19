/*
nyoj 221
��֪��������ǰ�������������������� 
ǰ��: preorder
����: inorder
����: aftorder 
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

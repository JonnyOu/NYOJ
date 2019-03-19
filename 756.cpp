/*
二叉树前序、中序、后序遍历的相互转化 
前序:preorder
中序:inorder
后序:aftorder 
*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

struct TreeNode {
	struct TreeNode *l_child, *r_child;
	char data;
};

////已知前序、中序，求后序遍历 
//void BinaryTreeOrderings(char *preorder, char *inorder, int length) {
//	if (length == 0) return ;
//	TreeNode* node = new TreeNode;
//	node->data = *preorder;
//	int rootIndex = 0;
//	for (; rootIndex < length; rootIndex++) {
//		if (inorder[rootIndex] == *preorder)
//		break;
//	} 
//	BinaryTreeOrderings(preorder+1, inorder, rootIndex);
//	BinaryTreeOrderings(preorder+rootIndex+1, inorder+rootIndex+1, length-rootIndex-1);
//	cout << node->data;
//}

//已知中序、后序，求前序遍历
void BinaryTreeOrderings(char *inorder, char *aftorder, int length) {
	if (length == 0) return ;
	TreeNode* node = new TreeNode;
	node->data = *(aftorder+length-1);
	cout << node->data;
	int rootIndex = 0;
	for (; rootIndex < length; rootIndex++) {
		if (inorder[rootIndex] == node->data)
			break;
	}
	BinaryTreeOrderings(inorder, aftorder, rootIndex);
	BinaryTreeOrderings(inorder+rootIndex+1, aftorder+rootIndex, length-rootIndex-1);
} 

int main() {
	char aft[26], in[26];
	int length;
	while (~scanf("%s%s", &aft, &in)) {
		length = strlen(aft);
		BinaryTreeOrderings(in, aft, length);
		cout << endl;
	}
	return 0;
}
/*
GDAFEMHZ ADEFGHMZ AEFDHZMG
*/

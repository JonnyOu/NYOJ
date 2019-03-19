/*
nyoj 290
�ֵ��� TrieNode
 
*/
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
const int MaxSize = 26;

struct TrieNode {
	int data;
	TrieNode *next[MaxSize]; //���ӷ�֧ 
	void init() {
		data = 0;
		memset(next, 0, sizeof(next));
	}
};

int Insert(TrieNode *root, const char *s) { //����һ������ 
	TrieNode *p = root;
	char c;
	while (*s != '\0') {
		c = *s-'a';
		if (p->next[c] == NULL) { //��������ڣ������ڵ� 
			TrieNode *temp = new TrieNode();	
			p->next[c] = temp; 
			p = p->next[c];
		} 
		else p = p->next[c];
		s++;
	}   
  p->data++;  
  return p->data;  
}

void del(TrieNode *root)                      //�ͷ������ֵ���ռ�Ķ����ռ�    
{   
	for (int i = 0; i < MaxSize; i++)
		if (root->next[i] != NULL) 
			del(root->next[i]); 
    free(root);   
} 

int main() {
	TrieNode *root = new TrieNode();
	int n, t = 0, p;
	char s[15], str[15];
	scanf("%d", &n);
	getchar();
	for (int i = 0 ; i < n; i++) {
		scanf("%s", s);
		p = Insert(root, s);
		if (t < p) {
			t = p;
			strcpy(str, s);
		}
	}
	printf("%s %d\n", str, t);
	del(root);
	return 0;
}

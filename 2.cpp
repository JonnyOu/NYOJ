/*
����˼·:��������ӣ�����������Գɹ����ӣ���û����Գɹ������No 
*/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
const int MaxSize = 10010;
typedef char dataType;

//˳��ջ
typedef struct {
	dataType data[MaxSize];
	int top;
}SeqStack;

//����˳��ջ
SeqStack* createStack() {
	SeqStack *t = new SeqStack;
	t->top = -1;
	return t;
} 

//�ж�ջ�Ƿ�Ϊ��
bool empty(SeqStack *s) {
	return s->top == -1;
} 

//�ж�ջ�Ƿ�Ϊ��
bool full(SeqStack *s) {
	return s->top == MaxSize - 1;
} 

//Ԫ��x��ջ
void Push(SeqStack *s, dataType x) {
	if (full(s)) exit(1);
	s->data[++s->top] = x;
} 

//��ջ
void Pop(SeqStack *s) {
	if (empty(s)) exit(1);
	s->top--;
} 

//ȡջ��Ԫ��
dataType top(SeqStack *s) {
	if (empty(s)) exit(1);
	return s->data[s->top];
} 

//��ջ��Ԫ�ظ���
int size(SeqStack *s) {
	return s->top+1;
} 

int main() {
	int T;
	cin >> T;
	while (T--) {
		SeqStack *s = createStack();
		string str;
		bool flag = true;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[')
				Push(s, str[i]);
			else if (str[i] == ')') {
				if (empty(s) || top(s) != '(') { flag = false; break; }
				else Pop(s);
			}
			else if (str[i] == ']') {
				if (empty(s) || top(s) != '[') { flag = false; break; }
				else Pop(s);
			}
		}
		if (empty(s) && flag == true) 
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
 

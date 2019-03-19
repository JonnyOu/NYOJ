/*
解题思路:左括号入队，与右括号配对成功出队！当没有配对成功即输出No 
*/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
const int MaxSize = 10010;
typedef char dataType;

//顺序栈
typedef struct {
	dataType data[MaxSize];
	int top;
}SeqStack;

//创建顺序栈
SeqStack* createStack() {
	SeqStack *t = new SeqStack;
	t->top = -1;
	return t;
} 

//判断栈是否为空
bool empty(SeqStack *s) {
	return s->top == -1;
} 

//判断栈是否为满
bool full(SeqStack *s) {
	return s->top == MaxSize - 1;
} 

//元素x进栈
void Push(SeqStack *s, dataType x) {
	if (full(s)) exit(1);
	s->data[++s->top] = x;
} 

//出栈
void Pop(SeqStack *s) {
	if (empty(s)) exit(1);
	s->top--;
} 

//取栈顶元素
dataType top(SeqStack *s) {
	if (empty(s)) exit(1);
	return s->data[s->top];
} 

//求栈顶元素个数
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
 

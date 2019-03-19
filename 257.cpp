/**
nyoj 257
分析: 
中缀转后缀
1.遇到数字直接输出
2.遇到'('，压入运算符栈中 
3.遇到')', 运算符栈元素出栈，直到遇到'(' 
4.栈顶运算符优先级大于等于当前遍历运算符，运算符出栈，最后压入当前运算符
5.遍历完毕后，将栈中的运算符全部输出 
*/

#include<iostream>
#include<string> 
#include<stack>
using namespace std;

/*
优先级比较 
*/
int cmp(char c) {
	switch(c) {
		case '*':
		case '/': return 2;
		case '+':
		case '-': return 1;
		case '(': return 0;
		default : return -1;
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		stack<char>chStack;
		chStack.push('#');
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				cout << s[i];
			} 
			else if (s[i] == '(') {
				chStack.push(s[i]);
			}
			else if (s[i] == ')') {
				while (chStack.top() != '(') {
					char c = chStack.top();
					cout << c;
					chStack.pop();
				}
				chStack.pop();
			}
			else {
				while (cmp(chStack.top()) >= cmp(s[i])) {
					char c = chStack.top();
					cout << c;
					chStack.pop();
				}
				chStack.push(s[i]);
			}
		}
		while (chStack.top() != '#') {
			char c = chStack.top();
			cout << c;
			chStack.pop();
		}
		cout << endl;
	}
	return 0;
} 

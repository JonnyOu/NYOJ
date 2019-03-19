/**
nyoj 257
����: 
��׺ת��׺
1.��������ֱ�����
2.����'('��ѹ�������ջ�� 
3.����')', �����ջԪ�س�ջ��ֱ������'(' 
4.ջ����������ȼ����ڵ��ڵ�ǰ������������������ջ�����ѹ�뵱ǰ�����
5.������Ϻ󣬽�ջ�е������ȫ����� 
*/

#include<iostream>
#include<string> 
#include<stack>
using namespace std;

/*
���ȼ��Ƚ� 
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

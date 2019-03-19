/**
nyoj 467
����:
��׺ת��׺˼·�ο�257
1.�����ַ������飬�������Ԫ�� 
2.ʶ�����Ԫ�أ��ַ������� 
*/ 

#include<iostream>
#include<stack>
#include<string>
using namespace std;
const int maxSize = 1000;
/*
���ȼ� 
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
		int flag = 0;
		stack<char> chStack;
		string strSet[maxSize];
		cin >> s;
		chStack.push('#');
		int i = 0;
		while (i < s.size()-1) {
			if (s[i] >= '0' && s[i] <= '9') {
				string str = "";
				str += s[i++];
				while (s[i] >= '0' && s[i] <= '9' || s[i] == '.') 
					str += s[i++];
				strSet[flag++] = str;
			}
			else {
				if (s[i] == '(') {
					chStack.push('(');
				}
				else if (s[i] == ')') {
					while (chStack.top() != '(') {
						string str = "";
						str += chStack.top();
						chStack.pop();
						strSet[flag++] = str;
					}
					chStack.pop();
				}
				else {
					while (cmp(chStack.top()) >= cmp(s[i])) {
						string str = "";
						str += chStack.top();
						chStack.pop();
						strSet[flag++] = str;
					}
					chStack.push(s[i]);
				}
				i++;
			}
		}
		while (chStack.top() != '#') {
			string str = "";
			str += chStack.top();
			chStack.pop();
			strSet[flag++] = str;
		}
		for (int i = 0; i < flag; i++) {
			cout << strSet[i] << ' ';
		}
		cout << "=" <<endl;
	}
	return 0;
}

/*
nyoj 267
����: ��ʽ�ӻ��ɺ�׺���ʽ���ο�467����������ջ��������׺���ʽ��
����������ջ���������ų�����ջ��Ԫ�أ���������ջ���������ջ��Ԫ�� 
*/
#include<iostream>
#include<stack>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;
const int maxSize = 1000;

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

bool isChar(string s) {
	if (s == "+" || s == "-" || s == "*" || s == "/") 
		return true;
	return false;
}

double cul(double a, double b, char c) {
	switch (c) {
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
	}
}

char charChaStr(string s) {
	if (s == "+") return '+';
	else if (s == "-") return '-';
	else if (s == "*") return '*';
	else return '/';
}

/*
���ַ���ת��Ϊdouble  
*/ 
double douChaStr(string s) {
	return atof(s.c_str()); 
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		stack<char> chStack;
		string strSet[maxSize];
		cin >> s;
		chStack.push('#');
		int i = 0, flag = 0;
		while (i < s.size()-1) {
			if (s[i] >= '0' && s[i] <= '9') {
				string str = "";
				str += s[i++];
				while (s[i] >= '0' && s[i] <= '9' || s[i] == '.') 
					str += s[i++];
				strSet[flag++] = str;
			}
			else {
				if (s[i] == '(') chStack.push('(');
				else if (s[i] == ')') {
					while (chStack.top() != '(') {
						string str = "";
						str += chStack.top();
						strSet[flag++] = str;
						chStack.pop();
					}
					chStack.pop();
				}
				else {
					while (cmp(chStack.top()) >= cmp(s[i])) {
						string str = "";
						str += chStack.top();
						strSet[flag++] = str;
						chStack.pop();
					}
					chStack.push(s[i]);
				}
				i++;
			}
		}
		while (chStack.top() != '#') {
			string str = "";
			str += chStack.top();
			strSet[flag++] = str;
			chStack.pop();
		}
		for (int i = 0; i < flag; i++) 
			cout << strSet[i];
		cout << '=' << endl;
		
		//����
		stack<double> douStack;
		for (int i = 0; i < flag; i++) {
			if (!isChar(strSet[i])) 
				douStack.push(douChaStr(strSet[i]));
			else {
				double second = douStack.top(); douStack.pop();
				double first = douStack.top(); douStack.pop();
				douStack.push(cul(first,second,charChaStr(strSet[i])));
			}
		}
		//������λС��
		cout << setiosflags(ios::fixed) << setprecision(2) << douStack.top() << endl;  
 	}
	return 0;
} 

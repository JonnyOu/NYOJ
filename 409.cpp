/*
nyoj 409
��������׺ʽתǰ׺ʽ����׺ʽת��׺ʽ����׺ʽ���㣨����ǰ׺ʽ���ߺ�׺ʽ���㣩

һ.��׺ʽת��׺ʽ
1.�������ұ���
2.��������ֱ�����
3.����'('��ѹ�������ջ�� 
4.����')', �����ջԪ�س�ջ��ֱ������'(' 
5.�������������ջ����������ȼ����ڵ��ڵ�ǰ�����������ջ���������ջ�����ѹ�뵱ǰ�����
6.������Ϻ󣬽�ջ�е������ȫ����� 
���������ջѹ�������ַ�'#',����Ĭ�����ȼ����
�������Ϊ�洢��һ���ַ�������strSet�У�������Ϻ�˳�����  

��.��׺ʽת��׺ʽ
1.�����������
2.����')'��ѹ�������ջ
3.����'('�������ջԪ�س�ջ��ֱ������')'
5.�������������ջ����������ȼ����ڵ��ڵ�ǰ�����������ջ���������ջ�����ѹ�뵱ǰ�����
6.������Ϻ󣬽�ջ�е������ȫ����� 
���������ջѹ�������ַ�'#',����Ĭ�����ȼ���� 
�������Ϊ�洢��һ���ַ�������strSet�У�������Ϻ�������� 
 
��.��׺ʽ����
���ú�׺ʽ����
	�������ұ���strSet���������֣�ѹ����ջnumStack�������ַ����������ջ��Ԫ�أ���������ѹ��numStack
����ǰ׺ʽ����
	���׺ʽ���ƣ������������strSet
������numStack��ջ��Ԫ�� 
*/

#include<iostream>
#include<stack>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
using namespace std; 
const int maxSize = 1005;

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

double cul(double a, double b, char c) {
	switch (c) {
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
	}
}
 
bool isChar(string s) {
	if (s == "+" || s == "-" || s == "*" || s == "/") 
		return true;
	return false;
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

/*
��׺ת��׺ 
*/
void printAltEx(string s) {
	int i = 0, flag = 0;
	stack<char> chAltStack;
	string strAltSet[maxSize];		
	chAltStack.push('#');
	while (i < s.size()-1) {
		if (s[i] >= '0' && s[i] <= '9') {
			string str = "";
			str += s[i++];
			while (s[i] >= '0' && s[i] <= '9' || s[i] == '.') 
				str += s[i++];
			strAltSet[flag++] = str;
		}
		else {
			if (s[i] == '(') chAltStack.push('(');
			else if (s[i] == ')') {
				while (chAltStack.top() != '(') {
					string str = "";
					str += chAltStack.top();
					strAltSet[flag++] = str;
					chAltStack.pop();
				}
				chAltStack.pop();
			}
			else {
				while (cmp(chAltStack.top()) >= cmp(s[i])) {
					string str = "";
					str += chAltStack.top();
					strAltSet[flag++] = str;
					chAltStack.pop();
				}
				chAltStack.push(s[i]);
			}
			i++;
		}
	}
	while (chAltStack.top() != '#') {
		string str = "";
		str += chAltStack.top();
		strAltSet[flag++] = str;
		chAltStack.pop();
	}
	for (int i = 0; i < flag; i++) 
		cout << strAltSet[i] << ' ';
	cout << '=' << endl;
	
//����
	stack<double> douStack;
	for (int i = 0; i < flag; i++) {
		if (!isChar(strAltSet[i])) 
			douStack.push(douChaStr(strAltSet[i]));
		else {
			double second = douStack.top(); douStack.pop();
			double first = douStack.top(); douStack.pop();
			douStack.push(cul(first,second,charChaStr(strAltSet[i])));
		}
	}
	//������λС��
	cout << setiosflags(ios::fixed) << setprecision(2) << douStack.top() << endl;  
}

/*
��׺תǰ׺ 
*/ 
void printBefEx(string s) {
	int i = s.size()-2, flag = 0;
	stack<char> chBefStack;
	string strBefSet[maxSize];		
	chBefStack.push('#');
	while (i >= 0) {
		if (s[i] >= '0' && s[i] <= '9') { 
			string str = "";
			str += s[i--];
			while (s[i] >= '0' && s[i] <= '9' || s[i] == '.')
				str += s[i--];
			reverse(str.begin(), str.end());
			strBefSet[flag++] = str;
		}
		else { 
			if (s[i] == ')') {
				chBefStack.push(')');
			}
			else if (s[i] == '(') {
				while (chBefStack.top() != ')') {
					string str = "";
					str += chBefStack.top();
					strBefSet[flag++] = str;
					chBefStack.pop();
				}
				chBefStack.pop();
			}
			else { 
				while (cmp(chBefStack.top()) > cmp(s[i])) {
					string str = "";
					str += chBefStack.top();
					strBefSet[flag++] = str;
					chBefStack.pop();
				}
				chBefStack.push(s[i]);
 			}
			i--;
		}
	}
	while (chBefStack.top() != '#') {
		string str = "";
		str += chBefStack.top();
		strBefSet[flag++] = str;
		chBefStack.pop();
	}
	for (int i = flag-1; i >= 0; i--) {
		cout << strBefSet[i] << ' ';
	}
	cout << "=" << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		printBefEx(s);
		printAltEx(s);
 	}
	return 0;
} 

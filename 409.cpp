/*
nyoj 409
分析：中缀式转前缀式，中缀式转后缀式，中缀式计算（可用前缀式或者后缀式计算）

一.中缀式转后缀式
1.从左往右遍历
2.遇到数字直接输出
3.遇到'('，压入运算符栈中 
4.遇到')', 运算符栈元素出栈，直到遇到'(' 
5.遇到运算符，若栈顶运算符优先级大于等于当前遍历运算符，栈顶运算符出栈，最后压入当前运算符
6.遍历完毕后，将栈中的运算符全部输出 
先让运算符栈压入卫兵字符'#',并且默认优先级最低
所有输出为存储到一个字符串数组strSet中，遍历完毕后顺序输出  

二.中缀式转后缀式
1.从右往左遍历
2.遇到')'，压入运算符栈
3.遇到'('，运算符栈元素出栈，直到遇到')'
5.遇到运算符，若栈顶运算符优先级大于等于当前遍历运算符，栈顶运算符出栈，最后压入当前运算符
6.遍历完毕后，将栈中的运算符全部输出 
先让运算符栈压入卫兵字符'#',并且默认优先级最低 
所有输出为存储到一个字符串数组strSet中，遍历完毕后逆序输出 
 
三.中缀式计算
利用后缀式计算
	从左往右遍历strSet，遇到数字，压入数栈numStack，遇到字符，提出两个栈顶元素，运算结果再压入numStack
利用前缀式计算
	与后缀式类似，从右往左遍历strSet
最后输出numStack的栈顶元素 
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
将字符串转换为double  
*/ 
double douChaStr(string s) {
	return atof(s.c_str()); 
}

/*
中缀转后缀 
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
	
//计算
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
	//保留两位小数
	cout << setiosflags(ios::fixed) << setprecision(2) << douStack.top() << endl;  
}

/*
中缀转前缀 
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

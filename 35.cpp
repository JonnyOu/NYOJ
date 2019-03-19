/*
nyoj-35 表达式求值

解题思路:
实时输入实时计算，分两个栈，一个栈存储数字stackNum，另一个存储字符stackChar

判断运算符优先级
如：(4+5)=?
输入（，（入栈stackNum，4入栈stackChar,+与（比较，（优先级低，+入栈，5入栈，）与+比较，+优先级高，
4，5，+出栈计算，9入栈，）入栈，（与）抵消，均出栈
 
题目以=结束，可以让=先压栈，当输入字符为=且此时栈顶元素为=，输入合法且输入结束，输出stackNum的栈顶元素即可 
*/

#include<iostream>
#include<stack>
#include<iomanip> 
using namespace std;

/*
二位数组判断优先级, 横坐标与竖坐标比较， 1为'>'关系， -1为'<'关系， 0为'='关系，2报错  
+=>0 , -=>1, *=>2 , /=>3, (=>4 , )=>5, ==>0
*/ 
int priority[7][7]={1,1,-1,-1,-1,1,1,
                 1,1,-1,-1,-1,1,1,
                 1,1,1,1,-1,1,1,
                 1,1,1,1,-1,1,1,
                 -1,-1,-1,-1,-1,0,2,
                 1,1,1,1,2,1,1,
                 -1,-1,-1,-1,-1,2,0};

/*
运算符比较 
*/
int table(char c){
  switch(c) {
    case '+':return 0;
    case '-':return 1;
    case '*':return 2;
    case '/':return 3;
    case '(':return 4;
    case ')':return 5;
    case '=':return 6;
  }
}

/*
计算 
*/
double cul(double a, double b, char c) {
	switch(c) {
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
	}
}

/*
判断输入的字符是否为运算符 
*/
bool isChar(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == '=')
		return true;
	return false;
}

        
int main() {
	int T;
	cin >> T;
	while (T--) {
		char c; //一个一个字符输入 
		bool flag = false; //处理小数点
		double integer = 0, decimal = 0, num = 0; //整数和小数部分
		double decs = 10; //计算小数位 
		stack<double> stackNum;
		stack<char> stackChar;
		stackChar.push('=');
		cin >> c;
		while (c != '=' || stackChar.top() != '=') {
			if (isChar(c)) {
				int a = table(c);
				int b = table(stackChar.top());
				int note = priority[b][a];
				if (note == -1) {
					stackChar.push(c);
					cin >> c;
					continue;
				} else if (note == 0) {
					stackChar.pop();
					cin >> c;
					continue;
				} else if (note == 1) {
					char ch = stackChar.top(); stackChar.pop();
					double second = stackNum.top(); stackNum.pop();
					double first = stackNum.top(); stackNum.pop();
					stackNum.push(cul(first, second, ch));
					continue;
				}
			} else {
				if (c == '.') {
					flag = true;
					cin >> c;
					continue;
				} 
				num = c-'0';
				if (flag == false) {
					integer = integer*10+num;
				} else {
					decimal = decimal+num/decs;
					decs *= 10;
				}
				cin >> c;
				if (isChar(c)) {
					stackNum.push(integer+decimal);
					flag = false;
					decimal = 0;
					integer = 0;
					decs = 10;
				}
			}
		}
		//保留两位小数 
		cout << setiosflags(ios::fixed) << setprecision(2) << stackNum.top() << endl;
	}
	return 0;
}












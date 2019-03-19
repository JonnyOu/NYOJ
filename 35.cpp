/*
nyoj-35 ���ʽ��ֵ

����˼·:
ʵʱ����ʵʱ���㣬������ջ��һ��ջ�洢����stackNum����һ���洢�ַ�stackChar

�ж���������ȼ�
�磺(4+5)=?
���루������ջstackNum��4��ջstackChar,+�루�Ƚϣ������ȼ��ͣ�+��ջ��5��ջ������+�Ƚϣ�+���ȼ��ߣ�
4��5��+��ջ���㣬9��ջ������ջ�����룩����������ջ
 
��Ŀ��=������������=��ѹջ���������ַ�Ϊ=�Ҵ�ʱջ��Ԫ��Ϊ=������Ϸ���������������stackNum��ջ��Ԫ�ؼ��� 
*/

#include<iostream>
#include<stack>
#include<iomanip> 
using namespace std;

/*
��λ�����ж����ȼ�, ��������������Ƚϣ� 1Ϊ'>'��ϵ�� -1Ϊ'<'��ϵ�� 0Ϊ'='��ϵ��2����  
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
������Ƚ� 
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
���� 
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
�ж�������ַ��Ƿ�Ϊ����� 
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
		char c; //һ��һ���ַ����� 
		bool flag = false; //����С����
		double integer = 0, decimal = 0, num = 0; //������С������
		double decs = 10; //����С��λ 
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
		//������λС�� 
		cout << setiosflags(ios::fixed) << setprecision(2) << stackNum.top() << endl;
	}
	return 0;
}












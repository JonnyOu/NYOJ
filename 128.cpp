/*
nyoj-128 前缀式计算

解题思路:
输入完整数据，由后往前读取，遇到数字进栈，遇到符号出两个数据，求得结果后进展 

*/

#include<iostream>
#include<string>
#include<sstream> 
#include<stack>
#include<iomanip>
using namespace std;
const int MaxSize = 505;

double result(double a, double b, char c) {
	switch(c) {
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
	}
}

bool isDou(string s) {
	if (s != "+" && s != "-" && s != "*" && s != "/") return true;
	return false;
}

/*
string转换为double 
*/
double changeDou(string s) {
	double integer = 0, decimal = 0, t;
	double times = 10;
	bool flag = false;
	int n = 0;
	while (n < s.length()) {
		if (s[n] == '.') {
			flag = true; n++; continue;
		}
		t = s[n]-'0';
		if (flag == false) {
			integer = integer*10+t;
		} else {
			decimal = decimal + t/times;
			times *= 10;
		}
		n++;
	}
	return integer+decimal;
}

int main() {
  string line;
	while (getline(cin, line)) { //读取一行数据 
		stringstream ss(line);
		string s;
		stack<string> stackTest;
		stack<double> stackNum;
		double num = 0;
		while (ss >> s) stackTest.push(s);
		while (!stackTest.empty()) {
			s = stackTest.top();
			if (isDou(s) == true) {
				double n = changeDou(s);
				stackNum.push(n);
			} else {
				double a = stackNum.top(); stackNum.pop();
				double b = stackNum.top(); stackNum.pop(); 
				stackNum.push(result(a, b, s[0]));
			}
			stackTest.pop();
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << stackNum.top() << endl;	
	}
	return 0;
}

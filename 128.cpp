/*
nyoj-128 ǰ׺ʽ����

����˼·:
�����������ݣ��ɺ���ǰ��ȡ���������ֽ�ջ���������ų��������ݣ���ý�����չ 

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
stringת��Ϊdouble 
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
	while (getline(cin, line)) { //��ȡһ������ 
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

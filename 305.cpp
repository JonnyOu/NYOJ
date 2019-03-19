/*
nyoj 305

����:������׺תǰ׺��˼·���ַ����Ӻ���ǰ�������½�����ջnumStack
1.�������֣���numStack
2.����'('������numStack��������Ԫ�أ��ж�'('ǰ��ĺ����������ֽ������㣬���ؽ���ٽ�numStack 
*/

#include<iostream>
#include<stack>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

/*
���������� 
*/
int cul(int a, int b, char c) {
	switch (c) {
		case 'd': return a+b;
		case 'x': return a>b?a:b;
		case 'n': return a<b?a:b;
		default : return 0;
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack<int> numStack;
		int i = s.length()-1;
		while (i >= 0) {
			if (s[i] >= '0' && s[i] <= '9') {
				string str = "";
				while (s[i] >= '0' && s[i] <= '9') 
					str += s[i--];
				reverse(str.begin(), str.end());
				numStack.push(atoi(str.c_str()));
			}
			else if (s[i] == 'd' || s[i] == 'x' || s[i] == 'n') {
				int a = numStack.top(); numStack.pop();
				int b = numStack.top(); numStack.pop();
				numStack.push(cul(a,b,s[i]));
				i -= 3;
			}
			else {
				i--;
			}
		}
		cout << numStack.top() << endl;
	}
	return 0;
} 

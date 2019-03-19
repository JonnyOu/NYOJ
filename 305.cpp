/*
nyoj 305

分析:根据中缀转前缀的思路，字符串从后向前遍历，新建数字栈numStack
1.遇到数字，入numStack
2.遇到'('，调用numStack顶部两个元素，判断'('前面的函数，对数字进行运算，返回结果再进numStack 
*/

#include<iostream>
#include<stack>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

/*
返回运算结果 
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

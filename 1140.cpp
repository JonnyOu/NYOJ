/*
nyoj 1140
栈的简单操作  
*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		string str, m;
		stack<string> stackEgg;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> str;
			if (str == "push") {
				cin >> m;
				stackEgg.push(m);
			} 
			else if (str == "pop") {
				if (!stackEgg.empty()) //不加过不了，输入数据可能有误！ 
					stackEgg.pop();
			}
		}
		if (stackEgg.empty()) {
			cout << "no eggs!";
		}
		else {
			while (!stackEgg.empty()) {
				cout << stackEgg.top() << ' ';
				stackEgg.pop();
			}
		}
		cout << endl;
	}
	return 0;
} 

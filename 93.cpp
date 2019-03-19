/*
解题思路:
每根柱子定义一个栈，判断每条指令，是否合法
如何判断?
a 柱子栈顶元素x出栈
b 柱子入栈，当b柱子为空或者栈顶元素大于x，成功栈，否则，结束判断 
*/
#include<stack>
#include<iostream>
#include<cstdio>
using namespace std;
stack<int> s[4];

bool F(int a, int b) {
	int note;
	if (s[a].empty()) return false;
	else note = s[a].top();
 	if (s[b].empty() || s[b].top() > note) {
		s[a].pop(); s[b].push(note);
		return true;
	}
	return false;
}

//清空栈元素
void clear(stack<int> *a) {
	while (!a->empty()) a->pop();
} 

int main() {
	int T;
	cin >> T;
	while (T--) {
		clear(&s[1]); clear(&s[2]); clear(&s[3]);
		int P, Q, a, b, note;
		bool flag = true;
		scanf("%d%d", &P, &Q);
		for (int i = 0; i < P; i++) s[1].push(P-i);
		for (int i = 0; i < Q; i++) {
			scanf("%d%d", &a, &b);
			if (F(a, b) == false) {
				flag = false; 
				break;
			} 
		}
		if (flag == false) cout << "illegal" << endl;
		else cout << "legal" << endl; 
	}
	return 0;
}

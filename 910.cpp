/*
nyoj 910
分析:利用set集合的不重复性和自动排序性存储字符串 
1.遍历器： set<?>iterator 反向遍历器 set<?>reverse_iterator
2.容器元素总个数 setStr.size()  
*/ 
#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string> setStr;
	string str;
	while (cin >> str) {
		setStr.insert(str);
	}
	set<string>::iterator it; 
	for (it = setStr.begin(); it != setStr.end(); it++) 
		cout << *it << ' ';
	cout << '\n' << setStr.size() << endl; 
	return 0;
}
 

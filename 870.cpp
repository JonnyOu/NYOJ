/*
870.
wa
解体思路:创建set集合，有初始值的元素放进集合里面，每次判断一行语句，假设能被赋值，扔进集合里，否则舍弃 

错误地方：被还没被赋值的值赋值会变为没有赋值！
以下为改进的代码 
*/ 
#include<cstdio>
#include<set>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n != -1) {
		set<char> a;
		string s;
		a.insert('a');
		set<char>::iterator iter;
		for (int i = 0; i < n; i++) {
			cin >> s;
			for (iter = a.begin(); iter != a.end(); iter++) {
			if (s[2] == *iter) {
				a.insert(s[0]);
				break;
				}
			}
		}
		if (a.size() == 1) {
			printf("none\n");
			continue;
		}
		for (iter = a.begin(); iter != a.end(); iter++) 
			printf("%c ", *iter);
		printf("\n");
	}
	return 0;
}

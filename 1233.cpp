/*
nyoj 1233
解题思路:
必须用字符串存储数字
自定义比较字符串函数cmp
组成最大字符串和最小字符串
相减 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

typedef struct {
	string str;
}Node;

bool cmp(Node a, Node b) {
	bool flag = a.str.size() > b.str.size() ? true : false;
	int k = 0;
	if (flag == true) {
		for (int i = 0; i < a.str.size(); i++) {
			if (a.str[i] != b.str[k]) {
				return a.str[i] < b.str[k];
			}
			k = (k+1) % b.str.size();
		}
	}
	else {
		for (int i = 0; i < b.str.size(); i++) {
			if (b.str[i] != a.str[k]) {
				return a.str[k] < b.str[i];
			}
			k = (k+1) % a.str.size();
		}
	}
	return a.str.size() < b.str.size();
} 

string Jian(string s1, string s2) { //两个位数相同的大数相减 
	int k = s1.size()-1;
	char c;
	string s;
	while (k >= 0) {
		if (s2[k] >= s1[k]) c = s2[k] - s1[k] + '0';
		else {
			s2[k-1]--;
			c = s2[k] + 10 - s1[k] + '0';
		}
		s += c;
		k--;
	}
	reverse(s.begin(), s.end());
	int p;
	for (p = 0; s[p] == '0'; p++);
	s = s.substr(p, s.size());
	if (s == "") s = "0";
	return s;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		string s1, s2;
		cin >> n;
		Node s[n];
		for (int i = 0; i < n; i++) cin >> s[i].str;
		sort(s, s+n, cmp);
		for (int i = 0; i < n; i++) {
			s1 += s[i].str;
			s2 += s[n-1-i].str;
		}
		cout << Jian(s1, s2) << endl;
	}
	return 0;
}

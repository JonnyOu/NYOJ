/*
524.
解题思路:字符串处理后进行比较
如何处理？
1.无论串头有无运算符，都加上运算符
2.处理整数部分前面多余的0
3.如果有小数点，处理小数点后面多余的0 

特殊情况: +0 == -0 
*/

#include<string>
#include<iostream>
using namespace std;

//判断有无小数点 
bool havePoint(string s) {
	for (int i = 0; i < s.size(); i++) 
		if (s[i] == '.') return true;
	return false;
}

//处理字符串 
string deal(string s) {
	if (havePoint(s)) {
		int t = s.size();
		for (;;) {
			if (s[--t] != '0') break;
		}
		if (s[t] == '.') s = s.substr(0, t);
		else s = s.substr(0, t+1);
	}
	if(s[0] == '+') {  
		int ans = 1, i;
		for (i = 1; i+1 != s.size() && s[i] == '0'; i++) ans++;
   	s = s.substr(ans, s.size());
  }  
  else if(s[0] == '-') {  
		int ans = 0, i;
		for (i = 1; i+1 != s.size() && s[i] == '0'; i++) ans++;
		s = '-'+s.substr(ans+1, s.size());
		if (s[0] == '-' && s[1] == '0') s = "0";
	}  
  else {  
		int ans = 0, i;
		for (i = 0; i+1 != s.size() && s[i] == '0'; i++) ans++;
		s = s.substr(ans, s.size());
  }  
//	cout << s << endl;
	return s;

} 

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		string ss1 = deal(s1), ss2 = deal(s2);
		if (ss1 == ss2)
			cout << "YES" << endl;
		else cout << "NO" << endl;
		cout << endl;
	}
	return 0;
}

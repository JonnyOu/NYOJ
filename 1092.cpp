/*
分层修改 
1.处理小数及进位部分，没有小数点添加“.00”,有小数点且小数位大于2，
保留两位小数，并且处理进位问题 
2.处理整数，每隔3个数添加一个括号
3.判断正负 
*/

#include<string>
#include<iostream>
using namespace std;

//进位处理 
string JinWei(string s) {
	int i = s.size()-1;
	for (;;) {
		if ((s[0] != '-' && i == -1) || (s[0] == '-' && i == 0)) break;
		if (s[i] == '.') i--;
		if (s[i] != '9') {
			s[i] += 1; break;
		}
		s[i] = '0';
		i--;
	}
	if (s[0] != '-' && i == -1) {
		s.insert(0, "1");
	}
	else if (s[0] == '-' && i == 0) {
		s.insert(1, "1");
	}
	return s;
}

//处理小数 
string Decimal(string s) {
	size_t a = s.find('.');
	if (a == s.npos) { //没有小数点 
		s += ".00"; return s;
	}
	else {
		if (a+3 >= s.size()) {//最多有两位小数 
			if (a+1+1 == s.size()) s = s + '0';
			return s;
		} 
		else { //有三位小数及以上 
			if (s[a+3] <= '4') { //没有进位 
				s = s.substr(0, a+2+1); return s;
			}
			else { //存在进位 
				s = JinWei(s.substr(0, a+2+1)); return s;
			} 
		}
	}
} 

//处理整数
string Integer(string s) {
	int k, i;
	if (s[0] == '-') k = 4;
	else k = 3;
	if (k == 4) { //去除前面的0 
		for (i = 1; s[i] == '0' && s[i+1] != '.'; i++);
		s = s.substr(i, s.size());
		s = '-' + s;
	}
	else {
		for (i = 0; s[i] == '0' && s[i+1] != '.'; i++);
		s = s.substr(i, s.size());
	}
	size_t a = s.find('.');
	while (a > k) {
		a -= 3;
		s.insert(a, ",");
	}
	return s;
} 

//判断正负
string Pm(string s) {
	if (s[0] == '-') {
		s = s.substr(1, s.size());
		s = '(' + s + ')';
	}
	return s;
} 

int main() {
	string s;
	while (cin >> s) {
		s = Decimal(s);
	//	cout << s << endl;
		s = Integer(s);
	//	cout << s << endl;
		s = Pm(s);
		cout << s << endl;
	}
	return 0;
}

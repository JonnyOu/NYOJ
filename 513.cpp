/*
跨度几个月的题终于被刷出来
事实证明，多分几个函数写对程序有极大好处 
*/
#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

//进位函数，为了缩减代码 
string JinYi(string t, int len) {
	int i, flag = 0;
	string s; 
	for (i = len; i < t.size(); i++) {
		if (t[i] != '9') {
			s += (t[i]+1);
			s += (t.substr(i+1, t.size()));
			flag = 1;
			break;
		}
		else {
			s += '0';
		}
	}
	if (flag == 0) s += '1'; 
	return s;
}

//传入两个字符串，从低位到高位传入,答案传出
string Add(string a, string b) {
	int len, t;
	if (a.size() > b.size()) {
		len = b.size(); t = 1;
	}
	else {
		len = a.size(); t = 0;
	}
	string s;
	char c = 0;
	for (int i = 0; i < len; i++) {	 
		c = a[i]+b[i]-'0'+c;
		if (c > '9') {
			s += (c-10);
			c = 1;
		}
		else {
			s += c;
			c = 0;
		}
	}
	if (a.size() == b.size() && c == 1) s += '1';
	else if (t == 0) {	//判断那个字符串长 
		if (c == 1) {	//进一 
			 s += JinYi(b, len);
		}
		else s += b.substr(len, b.size());
	}
	else {
		if (c == 1) {
			s += JinYi(a, len);
		}
		else s += a.substr(len, a.size());
	}
	reverse(s.begin(), s.end());
	return s;
}

//小数传输处理
string Xiao(string a2, string b2, int *p) {
//	cout << "a2 = " << a2 << "\n" << "b2 = " << b2 << endl;
	reverse(a2.begin(), a2.end()); reverse(b2.begin(), b2.end());
	int note = a2.size();
	for(int i = 0; i < a2.size(); i++) {
		if (a2[i] != '0') {
			note = i; break;
		}
	}
	a2 = a2.substr(note, a2.size());
	note = b2.size();
	for(int i = 0; i < b2.size(); i++) {
		if (b2[i] != '0') {
			note = i; break;
		}
	}
	b2 = b2.substr(note, b2.size());
	if (a2.size() > b2.size()) {
		string t;
		*p = a2.size();
		for (int i = 0; i < a2.size()-b2.size(); i++)	t += '0';
		t += b2;
		return Add(a2, t);
	}
	else {
		string t;
		*p = b2.size();
		for (int i = 0; i < b2.size()-a2.size(); i++) t += '0';
		t += a2;
		return Add(t, b2);
	}
} 

//处理小数部分的字符串，省掉后面的0 
string SS(string s) {
	int i, flag = false;
	for (i = s.size()-1; i >= 0; i--)
		if (s[i] != '0') {
			flag = true;
			break;
		}
		string t;
		if (flag == true) {
			t = s.substr(0, i+1);
			return t;
		}
		else return t;
}

/*
输出情况分析
	1.进位；
	2.不进位； 
*/
void Print(string s1, string s2, int x) {
	if (x == s2.size()) {	//小数部分没有进1 
		s2 = SS(s2);
		if (!s2.empty()) {
			//小数部分不为空 
			cout << s1 << '.' << s2 << endl;
	}
		else 
			cout << s1 << endl;
	}
	else {	//小数部分进1
		reverse(s1.begin(), s1.end());
		s1 = JinYi(s1, 0);
		reverse(s1.begin(), s1.end());
		s2 = s2.substr(1, s2.size());
		s2 = SS(s2);
		if (!s2.empty())
			cout << s1 << '.' << s2 << endl;
		else 
			cout << s1 << endl;
	}
} 

int main() {
	string a,b;
	while (cin >> a >> b) {
			string a1, a2, b1, b2;	//保存由小数点分隔开的4个字符串 
			string::size_type pos_a = a.find('.'), pos_b = b.find('.');
			if (pos_a != string::npos) {
				a1 = a.substr(0,pos_a);
				a2 = a.substr(pos_a+1, a.size());
			}
			else a1 = a;
			if (pos_b != string::npos) {
				b1 = b.substr(0,pos_b);
				b2 = b.substr(pos_b+1, b.size());
			}
			else b1 = b;
	//		cout << a1 << "\n" << a2 << "\n" << b1 << "\n" << b2 << endl;	
			/*
			细节处理：
				1.只能从低位到高位传输字符串
				2.小数部分可能有不作为的0
				3.小数部分向整数部分进位的问题	 
			*/ 
			string s1, s2;
			int x;
			reverse(a1.begin(), a1.end());
			reverse(b1.begin(), b1.end());
			s1 = Add(a1, b1);
			s2 = Xiao(a2, b2, &x);
	//		cout << "s1 = " <<s1 << "\n" << "s2 = " << s2 << endl;	
			Print(s1, s2, x);	
		
	}
	return 0;
}

/*
12.99 12.11
1.9 0.1
0.1 0.9
1.23 2.1
3 4.0

*/
